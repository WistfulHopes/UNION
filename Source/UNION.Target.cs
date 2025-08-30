using UnrealBuildTool;

public class UNIONTarget : TargetRules {
	public UNIONTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.AddRange(new string[] {
			"UNION",
			"UnionLib",
			"UnionRun",
			"UnionSystem",
			"UnionUI",
		});
	}
}
