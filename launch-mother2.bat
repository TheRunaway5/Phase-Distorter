@echo off
rem Select Mother 2 so its assets and default battery save stay independent.
call "%~dp0launch.bat" --game mother2 %*
exit /b %errorlevel%
