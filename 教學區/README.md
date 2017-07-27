# 前置作業
## 安裝建議工具
- **Tabler v0.7.0** ACE團隊開發的工具，但對於過大的檔案支援不佳
- **Notepad ++** 好用的筆記本軟體
- **Arma 3 Tool** 官方開發工具，在Steam上下載

</br>

# 翻譯作業
  開始翻譯的時候建議加入中文化聊天群(<a href="https://jq.qq.com/?_wv=1027&k=4C3E3cO">討論群連結</a>)，參與翻譯人員之間的討論。
## 開始翻譯
  使用文字編輯軟體(這邊建議使用Notepad ++)，直接對下載回來的所有stringtable.xml進行編輯。
## 檢查格式
  使用Tabler開啟專案資料夾，此程式會自動抓到資料夾底下所有的stringtable.xml檔案，如有任何錯誤這時就會出現，再使用文字編輯軟體進行修正。

</br>

# 建置測試檔案
## 準備工作
  1. 安裝Arma 3 Tool，此程式可以在Steam收藏庫中的工具中找到，請下載並安裝它。
  2. 在一個地方開新的資料夾(全英文路徑，以下示範使用Project資料夾)，並把專案資料夾addons裡面的a3資料夾複製出來到新的資料夾中。
  3. 複製專案資料夾dta裡面的languagecore_f至剛剛開的資料夾中。
##### <p align="center"><img src="http://i.imgur.com/gL44VTV.png" width="500"></br>包裝資料夾結構</p>
## 開始包裝PBO
  1. 開啟Arma 3 Tool，並啟動裡面的子工具Addon Builder。
##### <p align="center"><img src="http://i.imgur.com/9pRJq8p.png" width="500"></br>選擇Addon Builder</p>
##### <p align="center"><img src="http://i.imgur.com/ahKE8mo.png" width="500"></br>Addon Builder的啟動畫面</p>
  2. 進入OPTIONS(設定)裡面，設定Path to project folder資料夾路徑指到剛剛我們創立的Project資料夾。
##### <p align="center"><img src="http://i.imgur.com/yth7pss.png" width="500"></br>照此設定</p>
  3. 按下OK(確認)回到外面的畫面，點擊Addons source directory，選擇到第一個要包的資料夾。(首先從a3資料夾底下的3den_language開始)
##### <p align="center"><img src="http://i.imgur.com/FZbF2dx.png" width="500"></br>選擇3den_language</p>
  4. 最後選擇Destnation directory or filename為PBO選擇輸出位置，這邊可以直接指定到Project資料夾底下沒關係。
##### <p align="center"><img src="http://i.imgur.com/ljzwHDU.png" width="500"></br>包裝前最後完整的設定</p>
  5. 最後按下PACK即可完成包裝。(記得不要勾到Binarize，檔案會出錯)
  6. 此後重複步驟3依序選擇a3資料夾底下每一個資料夾進行包裝，最後再選擇languagecore_f的資料夾進行最後包裝。
  7. 把產出的所有檔案覆蓋到中文增強模組正式版中的addon資料夾並覆蓋掉原本的檔案，特別注意請把languagecore_f.pbo複製到dta的資料夾中並覆蓋掉原本的檔案。(不要把languagecore_f放在adoons資料夾裡面)
## 測試翻譯成果
  使用一般模組的掛載方法把中文化模組掛上，進到遊戲中測試所有文本是否正確。你可以到野戰手冊檢查是否每一個條目後面都有中文化增強模組的縮圖，有的話即代表載入成功，如有項目沒有載入到圖片，代表該文本的PBO並沒有被正確載入遊戲，需檢查是否包裝時發生錯誤。
##### <p align="center"><img src="http://i.imgur.com/NscI1y5.png" width="800"></br>檢查是否全部文本載入正確</p>
  任務languagemissions系列的就要去檢查任務展示與戰役那邊的文字是否有正確翻譯，這邊就沒有一定的看法，除了直接外面看預覽文字，要不就直接進去預覽遊戲。
##### <p align="center"><img src="http://i.imgur.com/UdDmMlz.png" width="800"></br>檢查戰役預覽文本</p>
##### <p align="center"><img src="http://i.imgur.com/1xK8geH.png" width="800"></br>檢查任務展示預覽文本</p>

</br>

# 完成中文化
  使用Github的Pull rquests功能把你完成的檔案上傳，經審查無誤後便會併入專案中。
