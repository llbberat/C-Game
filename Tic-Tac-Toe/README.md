# C-Game
A collection of classic arcade and logic games implemented in C. Featuring Tic-Tac-Toe and more to come. Focuses on clean code and fundamental programming logic.

This commit includes the complete implementation of the Tic-Tac-Toe game:
- 3x3 grid system using 2D arrays.
- Input validation to prevent overwriting moves.
- Win detection for rows, columns, and diagonals.
- Draw (tie) logic after 9 moves.
- Formatted console output for better UI.


 # C-Game: Tic-Tac-Toe

C dili ile geliştirilmiş, konsol tabanlı (CLI) klasik bir Tic-Tac-Toe (SOS) oyunudur. Bu proje, temel C programlama mantığını, 2 boyutlu dizileri ve oyun algoritmalarını anlamak için geliştirilmiştir.

## 🎮 Oynanış Bilgileri

Oyun iki kişi tarafından aynı klavye üzerinden sırayla oynanır.

1.  **Oyun Tahtası:** Oyun 3x3'lük bir ızgara üzerinde oynanır. Her hücre 1'den 9'a kadar bir numara ile temsil edilir:
    ```
    | 1 | 2 | 3 |
    -------------
    | 4 | 5 | 6 |
    -------------
    | 7 | 8 | 9 |
    ```
2.  **Hamle Yapma:** Oyuncular sırasıyla (Önce X, sonra O) hamle yapmak istedikleri hücrenin numarasını girerler.
3.  **Kazanma Kuralları:** Aynı sembolü (X veya O) yatay, dikey veya çapraz olarak yan yana getiren ilk oyuncu oyunu kazanır.
4.  **Beraberlik:** 9 hamle sonunda kimse 3'lü seti tamamlayamazsa oyun "Beraberlik" (Tie) ile sonuçlanır.

## 🛠️ Teknik Özellikler

* **Dinamik Giriş Kontrolü:** Dolu bir hücreye hamle yapılmasına veya geçersiz bir numara girilmesine izin vermez, tekrar sormaya devam eder.
* **Görsel Arayüz:** Ternary operatörleri kullanılarak oluşturulmuş temiz ve hizalı bir tablo yapısı.
* **Kazanma Algoritması:** Her hamleden sonra satır, sütun ve çaprazları kontrol eden fonksiyon.

## 🚀 Çalıştırma

Kodun çalışması için bilgisayarınızda bir C derleyicisinin (GCC gibi) kurulu olması gerekir.

1. Depoyu bilgisayarınıza indirin.
2. Terminali açın ve dosyanın olduğu klasöre gidin.
3. Şu komutu kullanarak derleyin:
   ```bash
   gcc main.c -o tictactoe
