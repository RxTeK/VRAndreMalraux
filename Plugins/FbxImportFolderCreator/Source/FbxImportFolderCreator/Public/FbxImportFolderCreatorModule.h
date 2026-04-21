#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class UFactory;
class UObject;
class UImportSubsystem;

class FFbxImportFolderCreatorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    void BindImportSubsystem();
    void UnbindImportSubsystem();
    void HandleAssetPostImport(UFactory* InFactory, UObject* InCreatedObject);
    bool TryGetImportedFbxData(UObject* InCreatedObject, FString& OutSourceAssetName, FString& OutDestinationPath) const;
    bool DoesFolderExist(const FString& InFolderPath) const;
    void CreateFolderIfNeeded(const FString& InFolderPath) const;
    void MoveAssetToFolder(UObject* InAsset, const FString& InDestinationFolder) const;

    FDelegateHandle OnAssetPostImportHandle;
    FDelegateHandle OnPostEngineInitHandle;
};
