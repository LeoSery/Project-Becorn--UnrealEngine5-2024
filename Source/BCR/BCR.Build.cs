using UnrealBuildTool;

public class BCR : ModuleRules
{
	public BCR(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });
		
		PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
	}
}
