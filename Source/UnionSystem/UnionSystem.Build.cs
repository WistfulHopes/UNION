using UnrealBuildTool;

public class UnionSystem : ModuleRules {
    public UnionSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimToTexture",
            "AnimationBudgetAllocator",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "InputCore",
            "Niagara",
            "ProceduralMeshComponent",
            "Slate",
            "SlateCore",
            "UMG",
            "mariaUploadPlugin",
        });
    }
}
