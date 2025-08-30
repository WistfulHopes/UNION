using UnrealBuildTool;

public class UnionUI : ModuleRules {
    public UnionUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "ImageWriteQueue",
            "Slate",
            "SlateCore",
            "UMG",
            "UnionSystem",
        });
    }
}
