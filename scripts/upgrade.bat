@echo off
setlocal ENABLEDELAYEDEXPANSION

set ip=%1
set fname=%2
set tftpname=%3

if "%ip%"=="" (
    echo [upgrade.bat] IP not specified
    exit /b 1
)
if "%fname%"=="" (
    echo [upgrade.bat] Firmware file not specified
    exit /b 1
)
if "%tftpname%"=="" (
    echo [upgrade.bat] TFTP name not specified
    exit /b 1
)
if not exist "%fname%" (
    echo [upgrade.bat] Firmware file not found: %fname%
    exit /b 1
)

echo [upgrade.bat] IP: %ip%
echo [upgrade.bat] Firmware: %fname%
echo [upgrade.bat] TFTP name: %tftpname%

tftp -i %ip% PUT "%fname%" %tftpname%
if errorlevel 1 (
    echo [upgrade.bat] TFTP ERROR
    exit /b 1
) else (
    echo [upgrade.bat] TFTP OK
    exit /b 0
)
