Craps Zar Oyunu (C Programlama)
Bu proje, C diliyle yazılmış, klasik Craps oyun mantığına dayanan basit bir konsol uygulamasıdır. 
Program, rastgele sayılar üreterek iki zar atar ve oyunun kurallarına göre kazananı veya kaybedeni belirler.

🎲 Oyun Kuralları
Oyun iki aşamadan oluşur:

İlk Atış:

Toplam 7 veya 11 gelirse: Kazanırsınız! (Natural)

Toplam 2, 3 veya 12 gelirse: Kaybedersiniz! (Craps)

Toplam 4, 5, 6, 8, 9 veya 10 gelirse: Bu sayı sizin Hedef Puanınız olur.

Puan Aşaması:

Hedef puanınızı tekrar tutturmaya çalışırsınız.

Hedef puanı tutturursanız: Kazanırsınız!

Hedef puandan önce 7 atarsanız: Kaybedersiniz!

🚀 Başlangıç
Projeyi yerel makinenizde çalıştırmak için aşağıdaki adımları izleyebilirsiniz.

Gereksinimler
Herhangi bir C derleyicisi (GCC, Clang, MSVC vb.)

Kurulum ve Çalıştırma
Depoyu klonlayın:

Bash
git clone https://github.com/kullaniciadi/proje-adi.git
Proje klasörüne gidin:

Bash
cd proje-adi
Kodu derleyin:

Bash
gcc main.c -o craps_oyunu
Programı çalıştırın:

Bash
./craps_oyunu
🛠️ Kullanılan Teknolojiler
Dil: C

Kütüphaneler: stdio.h, stdlib.h, time.h
