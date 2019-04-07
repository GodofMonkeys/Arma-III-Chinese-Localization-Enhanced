if not exist Fonts md Fonts

fontToTga.exe -size=24 MicrosoftYaHei Fonts\MicrosoftYaHei24
fontToTga.exe -bold -size=24 MicrosoftYaHei Fonts\MicrosoftYaHeiBold24

PATH I:\Game\steamapps\common\Arma 3 Tools\TexView2;%PATH%
for %%a in (Fonts\*.tga) do (
    Pal2PacE %%a
    del %%a
)
pause