# NEODUINO

極小ドットマトリクスLED(7x5)搭載 ArudinoUno互換機 NEODUINOのサンプルソース情報

# ファイルの説明
　NEODUINIO  
　　　├ NEODUINO.ino   FW本体  
　　　└ imagedata.h    表示画像データを収納したヘッダファイル  
　README.md　　　　　　このファイル
 
 
 # ソースコードの解説
  メインループで７行のドットマトリクスディスプレイの行の更新。  
  実処置は　updateMatrix()　に書かれている。  
  0.5ms間、行を全消しして（残像対策）、次の行のデータを５文字×RDBの15個分更新（set_color()）してから
  行を点灯させて0.5ms間待つ。  
    
  MsTimer2を使った割り込みで、表示データの表示コマの更新（updateData()）  
  
  表示画像データは imagedata.h　にまとめて書いてある。
  5個のRGB LEDを2バイトデータに右詰め15bitを使って各LEDのオンオフを記述。  
 
  コマ送りの速度は TIME_OF_FRAME  に定義。数字を大きくするとコマ送り速度が遅くなる。単位はms。  
  
  
 
 

