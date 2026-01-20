📝 C Dilinde Kelime Tahmin Oyunu
Bu proje, C programlama dili kullanılarak geliştirilmiş, terminal üzerinden oynanan temel bir Kelime Tahmin (Adam Asmaca) oyunudur.
Oyuncu; Meyve, Şair veya Terim kategorilerinden birini seçerek rastgele belirlenen kelimeyi harf tahminleri yaparak bulmaya çalışır.

🚀 Özellikler
3 Farklı Kategori: Meyve, Şair ve Terim seçenekleri.

Boşluk Desteği: Şair isimleri gibi boşluk içeren kelimelerde, boşluklar oyun başında otomatik olarak açılır.

Dinamik Uzunluk: Her kelimenin uzunluğu otomatik hesaplanır ve ona göre _ (alt tire) oluşturulur.

Hata Önleme: Kullanıcı girişlerindeki "Enter" (tampon) sorunları optimize edilmiştir.

🛠 Kullanılan Teknolojiler ve Fonksiyonlar
Bu projede C dilinin temel yapı taşları kullanılmıştır:

stdio.h: Standart giriş-çıkış işlemleri (printf, scanf).

string.h: Metin karşılaştırma (strcmp) ve kopyalama (strcpy) işlemleri.

time.h & stdlib.h: Rastgele kelime seçimi (srand, rand).


Ekranda çıkan kategori seçeneklerinden birini yazın (örneğin: sair).

Kelime uzunluğu kadar _ karakteri ekranda belirecektir.

Klavyeden tek tek harf girerek kelimeyi tamamlamaya çalışın.

Tüm harfler doğru tahmin edildiğinde "Tebrikler!!" mesajı ile oyun biter.

📌 Kod Yapısı Hakkında Notlar
Dizi Yönetimi: Kelimeler iki boyutlu char dizilerinde tutulur.

Null Terminator: Dizilerin sonu \0 ile kapatılarak bellek hataları önlenmiştir.

Kullanıcı Deneyimi: Her tahminden sonra kelimenin güncel hali ekrana basılır.

💡 Gelecek Planları (Yapılacaklar)
[ ] Yanlış tahminler için "Can Hakkı" sistemi eklemek.

[ ] Skor tablosu oluşturmak.

[ ] Daha fazla kategori ve kelime eklemek.
