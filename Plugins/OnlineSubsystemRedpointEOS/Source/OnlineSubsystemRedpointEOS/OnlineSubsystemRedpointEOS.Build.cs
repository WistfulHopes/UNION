using UnrealBuildTool;

public class OnlineSubsystemRedpointEOS : ModuleRules {
    public OnlineSubsystemRedpointEOS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemUtils",
            "UMG",
        });
    }
}
