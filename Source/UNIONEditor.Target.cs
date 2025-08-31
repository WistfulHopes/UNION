using UnrealBuildTool;

public class UNIONEditorTarget : TargetRules {
	public UNIONEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.AddRange(new string[] {
			"UNION",
			"UnionLib",
			"UnionRun",
			"UnionSystem",
			"UnionUI",
		});
		RegisterModulesCreatedByRider();
	}

	private void RegisterModulesCreatedByRider()
	{
		ExtraModuleNames.AddRange(new string[] { "UnionRunEditor" });
	}
}
