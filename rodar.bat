@echo off
REM Script para rodar o portfólio profissional
REM Compila o projeto e abre no navegador automaticamente

cd /d "%~dp0"

REM Exibir mensagem de início
cls
echo ============================================
echo  INICIANDO PORTFÓLIO PROFISSIONAL
echo ============================================
echo.
echo Compilando projeto...
echo.

REM Executar npm start (build + serve)
npm start

REM Se npm start falhar
if errorlevel 1 (
    echo.
    echo ERRO: Verifique se Node.js e npm estão instalados
    echo.
    pause
    exit /b 1
)

pause
