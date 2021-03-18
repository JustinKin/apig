// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Apig : ModuleRules
{
	public Apig(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
