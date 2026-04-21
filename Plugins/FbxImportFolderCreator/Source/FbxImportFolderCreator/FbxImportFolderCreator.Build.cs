using UnrealBuildTool;

public class FbxImportFolderCreator : ModuleRules
{
    public FbxImportFolderCreator(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new[]
            {
                "Core"
            });

        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "AssetRegistry",
                "AssetTools"
            });
    }
}
