// Source/Sum1toNEditor.Target.cs

using UnrealBuildTool;
using System.Collections.Generic;

public class Sum1toNEditorTarget : TargetRules
{
    public Sum1toNEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        // Adopt the latest UE5 defaults (Cpp20, strict conformance, new include order, etc.)
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
        CppStandard = CppStandardVersion.Cpp20;

        // Do NOT touch bStrictConformanceMode or BuildEnvironment here.
        ExtraModuleNames.Add("Sum1toN");
    }
}
