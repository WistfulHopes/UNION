using UnrealBuildTool;

public class UnionRun : ModuleRules {
    public UnionRun(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimToTexture",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "Hedgehog",
            "InputCore",
            "Niagara",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "UMG",
            "UnionSystem",
        });
    }
}
