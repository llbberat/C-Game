SOS Oyunu (C Programlama)

Bu proje, C dili kullanılarak geliştirilmiş, terminal tabanlı iki kişilik bir SOS oyunudur.
(6*6) boyutundaki bir tabloda oyuncular "S" ve "O" harflerini stratejik olarak yerleştirerek en yüksek puanı toplamaya çalışır.

🚀 Özellikler

Dinamik Sıra Mantığı: SOS yapan oyuncu tekrar oynama hakkı kazanır.
Gelişmiş Puanlama: Yatay, dikey ve çapraz (her iki yönde) SOS dizilimlerini otomatik olarak algılar.
Hata Kontrolü: Dolu hücrelere hamle yapılmasını engeller.
Oyun Sonu Analizi: Tüm hücreler dolduğunda toplam puanları karşılaştırır ve kazananı ilan eder.

🎮 Nasıl Oynanır?

Başlangıç: Programı çalıştırdığınızda oyuncu isimlerini girmeniz istenir.
Hamle Yapma: Ekranda 0'dan 35'e kadar numaralandırılmış bloklar göreceksiniz. Hamle yapmak istediğiniz bloğun numarasını tuşlayın.
Harf Seçimi: Seçtiğiniz bloğa yerleştirmek için S veya O harfini girin (Büyük harf duyarlıdır).
Puan Kazanma: Yan yana, alt alta veya çapraz şekilde S-O-S dizilimini tamamladığınızda 1 puan kazanırsınız ve sıra sizde kalır.
Oyunun Bitmesi: 36 bloğun tamamı dolduğunda oyun biter ve en yüksek puanı alan oyuncu kazanır.

🛠️ Kurulum ve Çalıştırma

Kodun çalışması için bilgisayarınızda bir C derleyicisinin (GCC gibi) kurulu olması gerekir.
Kodu bir dosyaya kaydedin (örneğin: sos_oyunu.c).Terminali açın ve şu komutla derleyin:Bashgcc sos_oyunu.c -o sos_oyunu
Ardından programı çalıştırın:Bash./sos_oyunu
📋 Kullanılan Fonksiyonlar

Fonksiyon Açıklama

control()Seçilen hücrenin boş olup olmadığını kontrol eder.
puanhesapla()Yapılan son hamlenin kaç adet SOS oluşturduğunu hesaplar.
çiz()Oyun tahtasının güncel halini ekrana basar.
main()Oyun döngüsünü, kullanıcı girişlerini ve sıra yönetimini idare eder.

