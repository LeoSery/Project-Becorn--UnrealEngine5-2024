@echo off
setlocal enabledelayedexpansion

:: Find the .uproject file in the current folder
set "PROJECT_PATH="
for %%F in (*.uproject) do (
    set "PROJECT_PATH=%%~dpnxF"
    goto :found_project
)
:found_project

if not defined PROJECT_PATH (
    echo No .uproject file found in the current directory.
    pause
    exit /b 1
)

:: Extract the project folder
for %%I in ("%PROJECT_PATH%") do set "PROJECT_FOLDER=%%~dpI"

:: Ask user if they want to clean the project
set /p CLEAN_PROJECT="Do you want to clean the project before rebuilding? (Y/N): "
if /i "%CLEAN_PROJECT%"=="Y" (
    echo Cleaning project...
    if exist "%PROJECT_FOLDER%.vs" rmdir /s /q "%PROJECT_FOLDER%.vs"
    if exist "%PROJECT_FOLDER%DerivedDataCache" rmdir /s /q "%PROJECT_FOLDER%DerivedDataCache"
    if exist "%PROJECT_FOLDER%Intermediate" rmdir /s /q "%PROJECT_FOLDER%Intermediate"
    if exist "%PROJECT_FOLDER%Saved" rmdir /s /q "%PROJECT_FOLDER%Saved"
    echo Project cleaned.
)

:: Search for the Unreal Engine 5.4 Build.bat file
set "BUILD_BAT="
if exist "C:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" (
    set "BUILD_BAT=C:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat"
) else if exist "D:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" (
    set "BUILD_BAT=D:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat"
) else if exist "C:\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" (
    set "BUILD_BAT=C:\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat"
)

if not defined BUILD_BAT (
    echo Unable to automatically find the Unreal Engine 5.4 Build.bat file.
    set /p BUILD_BAT="Please enter the full path to Build.bat manually: "
)

:: Execute Build.bat with the appropriate arguments
echo Executing Build.bat for the project %PROJECT_PATH%
"%BUILD_BAT%" -projectfiles -project="%PROJECT_PATH%" -game -rocket -progress -log="%PROJECT_FOLDER%Saved\Logs\UnrealVersionSelector-%date:~-4%.%date:~3,2%.%date:~0,2%-%time:~0,2%.%time:~3,2%.%time:~6,2%.log"

echo Compilation completed.
pause