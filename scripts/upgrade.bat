@echo off
setlocal enabledelayedexpansion

set ip=10.0.0.2
set fname=build\stm32f7.bin

if not "%~1"=="" set ip=%~1
if not "%~2"=="" set fname=%~2

echo %ip% %fname%

if not exist "%fname%" (
    exit /b 1
)

for /f "tokens=* usebackq" %%i in (`cksfv -b -q "%fname%" ^| tail -n 1`) do set crc=%%i
if "!crc!"=="" (
    exit /b 1
)

for /f "tokens=* delims= " %%i in ("!crc!") do set last=%%i
set crc=!last!

set outname=!crc!.bin
tftp -i %ip% PUT "%fname%" "!outname!"
if errorlevel 1 (
    exit /b 1
) else (
    exit /b 0
)
