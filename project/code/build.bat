 @echo off

:: Set build directory relative to current drive and path
set BuildDir=%~dp0..\build

:: Create path if it doesn't exist
if not exist %BuildDir% mkdir %BuildDir%

:: Move to build directory
pushd %BuildDir%

:: Set compiler arguments
set Files=..\..\project\code\win32_main.cpp
set Libs=user32.lib
set ObjDir=.\obj\

:: Set compiler flags:
:: Visual Compiler:
:: -Zi enable debugging info
:: -FC use full path in diagnostics
:: -Fo path to store Object files
set CompilerFlags=-Zi -FC -Fo%ObjDir%

:: Create Object directory if it doesn't exist
if not exist %ObjDir% mkdir %ObjDir%

:: Run Visual Studio compiler
cl %CompilerFlags% %Files% %Libs%

:: Jump out of build directory
popd