📝 Sayı Tahmin Oyunu (Number Guessing Game)
C dili ile geliştirilmiş, kullanıcıdan alınan zorluk seviyesine göre rastgele sayı üreten ve kullanıcının bu sayıyı belirli bir deneme hakları dahilinde bulmaya çalıştığı interaktif bir konsol oyunudur.

🚀 Özellikler
Dinamik Zorluk Seviyesi: Kolay (0-9), Orta (0-24) ve Zor (0-49) seçenekleri.

Akıllı Yönlendirme: Her tahminden sonra kullanıcıya "Daha küçük bir sayı gir" veya "Daha büyük bir sayı gir" şeklinde geri bildirim verir.

Sınırlı Hak Sistemi: Kullanıcının sayıyı bulmak için toplam 5 tahmin hakkı vardır.

Hata Kontrolü: string.h kütüphanesi kullanılarak metin tabanlı girişlerin kontrolü.

🛠️ Kurulum ve Çalıştırma
Projeyi yerel bilgisayarınızda çalıştırmak için şu adımları izleyebilirsiniz:

Depoyu Klonlayın:

Bash
git clone https://github.com/kullaniciadi/sayi-tahmin-oyunu.git
Dizine Gidin:

Bash
cd sayi-tahmin-oyunu
Derleyin (GCC Gerekir):

Bash
gcc main.c -o guess_game
Çalıştırın:

Bash
./guess_game
🎮 Nasıl Oynanır?
Program başladığında sizden bir zorluk seviyesi seçmeniz istenir (Easy, Medium, Hard).

Seçtiğiniz seviyeye göre bilgisayar arka planda gizli bir sayı tutar.

5 hakkınız boyunca tahminlerinizi girersiniz.

Sayıyı doğru tahmin ederseniz kazanırsınız, haklarınız biterse oyun sona erer.

📂 Dosya Yapısı
main.c: Oyunun tüm mantığını ve döngülerini içeren ana kaynak kod dosyası.

README.md: Proje hakkında bilgilendirme dosyası.

🤝 Katkıda Bulunma
Geliştirmeler için her türlü katkıya açığım! Lütfen bir Issue açın veya Pull Request gönderin.

