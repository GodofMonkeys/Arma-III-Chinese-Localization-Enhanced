if not exist Fonts md Fonts

fontToTga.exe -maxTexSize=2048 -size=20 "Noto Sans CJK TC Regular" Fonts\NotoSansCJK20
fontToTga.exe -maxTexSize=2048 -size=30 "Noto Sans CJK TC Regular" Fonts\NotoSansCJK30

fontToTga.exe -maxTexSize=2048 -size=20 "Noto Sans CJK TC Bold" Fonts\NotoSansCJK-Bold20
fontToTga.exe -maxTexSize=2048 -size=30 "Noto Sans CJK TC Bold" Fonts\NotoSansCJK-Bold30

PATH I:\Game\steamapps\common\Arma 3 Tools\TexView2;%PATH%
for %%a in (Fonts\*.tga) do (
    Pal2PacE %%a
    del %%a
)
pause