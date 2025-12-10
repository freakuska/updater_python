@echo off
set trgt=10.0.1.85
set fname=bkru-20251210.bin
if not "%1" == "" set trgt=%1
if not "%2" == "" set fname=%2
echo %trgt% %fname%
if "%1" == "" pause

for /f %%i in ('crc32.exe %fname%') do set crc=%%i
tftp -i %trgt% PUT %fname% %crc:~-8%.bin

if "%1" == "" pause