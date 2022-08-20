// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PD2 : ModuleRules
{
	public PD2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
