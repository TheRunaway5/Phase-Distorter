@echo off
rem Keep profile selection here and executable discovery in the shared launcher.
call "%~dp0launch.bat" --game earthbound %*
exit /b %errorlevel%
