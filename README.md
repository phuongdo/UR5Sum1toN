# SUM 1 to N

## Build

export UE5_ROOT=/home/fenix/Downloads/Linux_Unreal_Engine_5.5.4
export PROJ_PATH=$PWD/Sum1toN.uproject


$UE5_ROOT/Engine/Build/BatchFiles/Linux/Build.sh \
  Sum1toNEditor Linux Development \
  "$PROJ_PATH"


cd ~/Projects/Sum1toN
$UE5_ROOT/Engine/Build/BatchFiles/Linux/GenerateProjectFiles.sh \
  -project="$PROJ_PATH" -game -editor


$UE5_ROOT/Engine/Build/BatchFiles/Linux/Build.sh \
  Sum1toNEditor Linux Development \
  "$PROJ_PATH"


$UE5_ROOT/Engine/Binaries/Linux/UnrealEditor \
  "$PROJ_PATH" \
  -run=Sum1toNCommandlet \
  -N=12345 \
  -NullRHI \
  -unattended \
  -nopause 

```
OUTPUT
025.05.07-08.50.32:096][  0]LogPython: Using Python 3.11.8
[2025.05.07-08.50.33:000][  0]LogPython: Display: No enabled plugins with python dependencies found, skipping
[2025.05.07-08.50.33:000][  0]LogPython: Display: No enabled plugins with python dependencies found, skipping
[2025.05.07-08.50.33:019][  0]LogTemp: Display: Sum of 1→500 is 125250
[2025.05.07-08.50.33:019][  0]LogTemp: Display: Sum of 1→500 is 125250
[2025.05.07-08.50.33:019][  0]Sum of 1→500 is 125250

[2025.05.07-08.50.33:019][  0]LogCore: Engine exit requested (reason: Commandlet Sum1toNCommandlet_0 finished execution (result 0))
[2025.05.07-08.50.33:019][  0]LogInit: Display:
```