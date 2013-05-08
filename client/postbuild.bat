@echo off
if not exist "%1" goto error
if not exist "%2" goto error

xcopy /Y "%1"\DLL\*.dll "%2"
goto end

:error
echo Not enough parameters

:end

