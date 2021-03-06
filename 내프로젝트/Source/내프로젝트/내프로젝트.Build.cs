// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class 내프로젝트 : ModuleRules
{
	public 내프로젝트(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
