// Source/Sum1toNTarget.cs

using UnrealBuildTool;
using System.Collections.Generic;

public class Sum1toNTarget : TargetRules
{
    public Sum1toNTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("Sum1toN");
    }
}
