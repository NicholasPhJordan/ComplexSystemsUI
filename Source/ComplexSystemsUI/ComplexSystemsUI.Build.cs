// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ComplexSystemsUI : ModuleRules
{
	public ComplexSystemsUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
