@echo off
rem Resolve paths relative to this launcher so shortcuts need no working-directory setup.
rem Prefer a local single-config build then Release build before the packaged executable.
setlocal
set "program=%~dp0build\cpp\eb_cpp.exe"
if exist "%program%" goto run
set "program=%~dp0build\cpp\Release\eb_cpp.exe"
if exist "%program%" goto run
set "program=%~dp0Phase Distorter.exe"
if exist "%program%" goto run
set "program=%~dp0launchers\windows\bin\eb_cpp.exe"
if exist "%program%" goto run
echo No Windows executable found. See README.md for build instructions. 1>&2
exit /b 1
:run
"%program%" %*
exit /b %errorlevel%
