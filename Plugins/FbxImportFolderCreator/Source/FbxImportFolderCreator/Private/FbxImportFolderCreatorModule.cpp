#include "FbxImportFolderCreatorModule.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "Editor.h"
#include "EditorFramework/AssetImportData.h"
#include "Factories/Factory.h"
#include "HAL/FileManager.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstance.h"
#include "Misc/CoreDelegates.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "Subsystems/ImportSubsystem.h"
#include "UObject/Field.h"
#include "UObject/UnrealType.h"
#include "UObject/Object.h"
#include "UObject/Package.h"

DEFINE_LOG_CATEGORY_STATIC(LogFbxImportFolderCreator, Log, All);

void FFbxImportFolderCreatorModule::StartupModule()
{
    FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

    if (GEditor != nullptr)
    {
        BindImportSubsystem();
        return;
    }

    OnPostEngineInitHandle = FCoreDelegates::OnPostEngineInit.AddRaw(this, &FFbxImportFolderCreatorModule::BindImportSubsystem);
}

void FFbxImportFolderCreatorModule::ShutdownModule()
{
    if (OnPostEngineInitHandle.IsValid())
    {
        FCoreDelegates::OnPostEngineInit.Remove(OnPostEngineInitHandle);
    }

    OnPostEngineInitHandle.Reset();
    UnbindImportSubsystem();
}

void FFbxImportFolderCreatorModule::BindImportSubsystem()
{
    if (OnAssetPostImportHandle.IsValid())
    {
        return;
    }

    if (GEditor == nullptr)
    {
        UE_LOG(LogFbxImportFolderCreator, Warning, TEXT("GEditor is not available, import hook was not bound"));
        return;
    }

    if (UImportSubsystem* ImportSubsystem = GEditor->GetEditorSubsystem<UImportSubsystem>())
    {
        OnAssetPostImportHandle = ImportSubsystem->OnAssetPostImport.AddRaw(this, &FFbxImportFolderCreatorModule::HandleAssetPostImport);
        UE_LOG(LogFbxImportFolderCreator, Log, TEXT("Bound to UImportSubsystem::OnAssetPostImport"));
    }
}

void FFbxImportFolderCreatorModule::UnbindImportSubsystem()
{
    if (!OnAssetPostImportHandle.IsValid() || GEditor == nullptr)
    {
        OnAssetPostImportHandle.Reset();
        return;
    }

    if (UImportSubsystem* ImportSubsystem = GEditor->GetEditorSubsystem<UImportSubsystem>())
    {
        ImportSubsystem->OnAssetPostImport.Remove(OnAssetPostImportHandle);
    }

    OnAssetPostImportHandle.Reset();
}

void FFbxImportFolderCreatorModule::HandleAssetPostImport(UFactory* InFactory, UObject* InCreatedObject)
{
    if (InCreatedObject == nullptr)
    {
        return;
    }

    FString SourceAssetName;
    FString DestinationPath;
    if (!TryGetImportedFbxData(InCreatedObject, SourceAssetName, DestinationPath))
    {
        UE_LOG(LogFbxImportFolderCreator, Verbose, TEXT("Skipped imported object '%s'"), *InCreatedObject->GetName());
        return;
    }

    const FString FactoryName = InFactory != nullptr ? InFactory->GetClass()->GetName() : TEXT("None");
    UE_LOG(LogFbxImportFolderCreator, Log, TEXT("Handling FBX import for '%s' in '%s' via factory '%s'"), *SourceAssetName, *DestinationPath, *FactoryName);

    FString MaterialsFolderPath;
    const FString ExistingMatRootPath = DestinationPath / TEXT("mat");
    if (DoesFolderExist(ExistingMatRootPath))
    {
        MaterialsFolderPath = ExistingMatRootPath / SourceAssetName;
        CreateFolderIfNeeded(MaterialsFolderPath);
    }
    else
    {
        const FString AssetFolderPath = DestinationPath / SourceAssetName;
        MaterialsFolderPath = AssetFolderPath / TEXT("Materials");
        CreateFolderIfNeeded(AssetFolderPath);
        CreateFolderIfNeeded(MaterialsFolderPath);
    }

    if (InCreatedObject->IsA<UMaterial>() || InCreatedObject->IsA<UMaterialInstance>())
    {
        MoveAssetToFolder(InCreatedObject, MaterialsFolderPath);
    }
}

bool FFbxImportFolderCreatorModule::TryGetImportedFbxData(UObject* InCreatedObject, FString& OutSourceAssetName, FString& OutDestinationPath) const
{
    const UAssetImportData* ImportData = nullptr;
    for (TFieldIterator<FObjectPropertyBase> PropertyIt(InCreatedObject->GetClass(), EFieldIterationFlags::IncludeSuper); PropertyIt; ++PropertyIt)
    {
        const FObjectPropertyBase* ObjectProperty = *PropertyIt;
        if (ObjectProperty->PropertyClass != nullptr && ObjectProperty->PropertyClass->IsChildOf(UAssetImportData::StaticClass()))
        {
            ImportData = Cast<UAssetImportData>(ObjectProperty->GetObjectPropertyValue_InContainer(InCreatedObject));
            if (ImportData != nullptr)
            {
                break;
            }
        }
    }

    if (ImportData == nullptr)
    {
        return false;
    }

    TArray<FString> SourceFilenames;
    ImportData->ExtractFilenames(SourceFilenames);
    if (SourceFilenames.IsEmpty())
    {
        return false;
    }

    const FString& SourceFilename = SourceFilenames[0];
    if (!FPaths::GetExtension(SourceFilename).Equals(TEXT("fbx"), ESearchCase::IgnoreCase))
    {
        return false;
    }

    OutSourceAssetName = FPaths::GetBaseFilename(SourceFilename);
    OutDestinationPath = FPackageName::GetLongPackagePath(InCreatedObject->GetOutermost()->GetName());

    return !OutSourceAssetName.IsEmpty() && !OutDestinationPath.IsEmpty();
}

bool FFbxImportFolderCreatorModule::DoesFolderExist(const FString& InFolderPath) const
{
    if (!FPackageName::IsValidLongPackageName(InFolderPath))
    {
        return false;
    }

    FString FolderFilename;
    if (!FPackageName::TryConvertLongPackageNameToFilename(InFolderPath, FolderFilename))
    {
        return false;
    }

    return IFileManager::Get().DirectoryExists(*FolderFilename);
}

void FFbxImportFolderCreatorModule::CreateFolderIfNeeded(const FString& InFolderPath) const
{
    if (!FPackageName::IsValidLongPackageName(InFolderPath))
    {
        return;
    }

    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    AssetRegistryModule.Get().AddPath(InFolderPath);

    FString FolderFilename;
    if (!FPackageName::TryConvertLongPackageNameToFilename(InFolderPath, FolderFilename))
    {
        return;
    }

    if (IFileManager::Get().DirectoryExists(*FolderFilename))
    {
        return;
    }

    if (!IFileManager::Get().MakeDirectory(*FolderFilename, true))
    {
        UE_LOG(LogFbxImportFolderCreator, Warning, TEXT("Failed to create directory '%s'"), *FolderFilename);
        return;
    }

    TArray<FString> PathsToScan;
    PathsToScan.Add(InFolderPath);
    AssetRegistryModule.Get().ScanPathsSynchronous(PathsToScan, true);
}

void FFbxImportFolderCreatorModule::MoveAssetToFolder(UObject* InAsset, const FString& InDestinationFolder) const
{
    if (InAsset == nullptr || !FPackageName::IsValidLongPackageName(InDestinationFolder))
    {
        return;
    }

    const FString CurrentFolder = FPackageName::GetLongPackagePath(InAsset->GetOutermost()->GetName());
    if (CurrentFolder.Equals(InDestinationFolder, ESearchCase::CaseSensitive))
    {
        return;
    }

    FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

    TArray<FAssetRenameData> AssetsToRename;
    AssetsToRename.Emplace(InAsset, InDestinationFolder, InAsset->GetName());

    const bool bRenameSucceeded = AssetToolsModule.Get().RenameAssets(AssetsToRename);
    if (!bRenameSucceeded)
    {
        UE_LOG(LogFbxImportFolderCreator, Warning, TEXT("Failed to move asset '%s' to '%s'"), *InAsset->GetName(), *InDestinationFolder);
    }
}

IMPLEMENT_MODULE(FFbxImportFolderCreatorModule, FbxImportFolderCreator)
