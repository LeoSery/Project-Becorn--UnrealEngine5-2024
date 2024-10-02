@echo off
setlocal enabledelayedexpansion

:: Trouver le fichier .uproject dans le dossier courant
set "PROJECT_PATH="
for %%F in (*.uproject) do (
    set "PROJECT_PATH=%%~dpnxF"
    goto :found_project
)
:found_project

if not defined PROJECT_PATH (
    echo Aucun fichier .uproject trouve dans le repertoire actuel.
    pause
    exit /b 1
)

:: Extraire le dossier du projet
for %%I in ("%PROJECT_PATH%") do set "PROJECT_FOLDER=%%~dpI"

:: Chercher le fichier Build.bat d'Unreal Engine 5.4
set "BUILD_BAT="
if exist "C:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" (
    set "BUILD_BAT=C:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat"
) else if exist "D:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat" (
    set "BUILD_BAT=D:\Program Files\Epic Games\UE_5.4\Engine\Build\BatchFiles\Build.bat"
)

if not defined BUILD_BAT (
    echo Impossible de trouver automatiquement le fichier Build.bat d'Unreal Engine 5.4.
    set /p BUILD_BAT="Veuillez entrer manuellement le chemin complet vers Build.bat: "
)

:: Executer Build.bat avec les arguments appropries
echo Execution de Build.bat pour le projet %PROJECT_PATH%
"%BUILD_BAT%" -projectfiles -project="%PROJECT_PATH%" -game -rocket -progress -log="%PROJECT_FOLDER%Saved\Logs\UnrealVersionSelector-%date:~-4%.%date:~3,2%.%date:~0,2%-%time:~0,2%.%time:~3,2%.%time:~6,2%.log"

echo Compilation terminee.
pause