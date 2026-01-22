@echo off
set pd=%CD%
cd %~dp0
set YYYYMMDD=%DATE:~6,4%%DATE:~3,2%%DATE:~0,2%
for %%I in (.) do set proj=%%~nxI
set py=main.py
set exe=%proj%-%YYYYMMDD%.exe
echo %py%
echo %exe%
set PYTHONPATH=..
C:\Users\AEngalycheva\AppData\Local\Programs\Python\Python313\python.exe -m nuitka --follow-imports --enable-plugin=tk-inter --enable-plugin=no-qt --standalone --onefile --output-filename=%exe% %py%
pause
