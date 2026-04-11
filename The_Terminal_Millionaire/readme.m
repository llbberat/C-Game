🧠 C-Millionaire: Terminal Edition
Bu proje, Karabük Üniversitesi Yazılım Mühendisliği 1. sınıf çalışmaları kapsamında geliştirilmiş, C dili ile yazılmış gelişmiş bir bilgi yarışması oyunudur. 
Proje; dosya yönetimi, dinamik veri işleme (parsing) ve kullanıcı dostu bir terminal arayüzü sunmaya odaklanır.

🚀 Öne Çıkan Özellikler
Dinamik Veri İşleme: Sorular sorular.txt dosyasından ; ayırıcısı kullanılarak çekilir. strtok ve strcpy fonksiyonları ile veriler yapılandırılmış (struct) dizilere aktarılır.

Güvenli Dosya Okuma (Defensive Programming): Dosya okuma sırasında her token için NULL kontrolü yapılır. Eksik veya hatalı veri içeren satırlar programı çökertmeden otomatik olarak atlanır.

Akıllı Zorluk Sistemi: Oyun 5 dereceden oluşur. Her derece, dosyadaki ilgili zorluk grubundan ((rand() % 5) + (derece - 1) * 5) rastgele bir soru seçer.

Gelişmiş Joker & Strateji:

%50 Jokeri: Doğru cevabın yanına rastgele bir yanlış şık bırakır. do-while döngüsü ile yalancı şıkkın doğru cevapla çakışması engellenir.

Withdraw (Çekilme): Oyuncu istediği an W tuşuyla çekilip ödül havuzunun %40'ını alabilir.

Time Limit: Her soru için 30 saniyelik gerçek zamanlı süre sınırı uygulanır.

ANSI Renkli Arayüz: Windows terminalinde ENABLE_VIRTUAL_TERMINAL_PROCESSING modu aktif edilerek sorular mavi, uyarılar kırmızı ve ödüller sarı renklerle vurgulanmıştır.

🛠️ Teknik Özellikler
Programlama Dili: C

Kütüphaneler: stdio.h, stdlib.h, string.h, time.h, ctype.h, windows.h

Temel Yapılar: struct, do-while, while, if-else, pointer, time_t

Platform: Windows (ANSI renk desteği ile)

📂 Dosya Yapısı
main.c: Oyunun tüm mantığını ve motorunu içeren kaynak kod.

sorular.txt: Yarışma sorularının saklandığı veri tabanı dosyası.

Format: Soru;A;B;C;D;DogruCevap;Zorluk
