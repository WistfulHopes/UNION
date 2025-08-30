using UnrealBuildTool;

public class UNION : ModuleRules {
    public UNION(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "EnhancedInput",
            "InputCore",
            "LevelSequence",
            "Niagara",
            "SlateCore",
            "UMG",
            "UnionLib",
            "UnionRun",
            "UnionSystem",
            "UnionUI",
        });
    }
}
