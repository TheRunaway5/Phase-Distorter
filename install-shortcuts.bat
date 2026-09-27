@echo off
rem Optional terminal wrapper. Users can instead double-click install-shortcuts.vbs directly.
rem The generated shortcuts open the native executable without any batch wrapper.
rem --destination "DIR" creates only one shortcut in that directory, useful for portable setups.
setlocal
cscript //nologo "%~dp0install-shortcuts.vbs" %*
exit /b %errorlevel%
