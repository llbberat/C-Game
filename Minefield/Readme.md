C-Minesweeper-Terminal-Game
Bu proje, C dili kullanılarak geliştirilmiş, terminal üzerinden oynanan basit bir Mayın Tarlası oyunudur. Oyuncu, zorluk seviyesini seçer ve mayınlara yakalanmadan tüm güvenli alanları açmaya çalışır.

🎮 Oyun Özellikleri
Zorluk Seviyeleri: Kolay (5 Mayın), Orta (7 Mayın) ve Zor (10 Mayın) seçenekleri.

Dinamik Harita: 5x5 boyutunda bir oyun alanı.

Hata Kontrolü: Daha önce seçilmiş bir kareyi tekrar seçtiğinizde sizi uyarır.

Oyun Sonu: Tüm güvenli kareler açıldığında kazanırsınız, bir mayına (X) bastığınızda oyun biter.


🕹️ Nasıl Oynanır?
Oyun başladığında sizden bir zorluk seviyesi seçmeniz istenir. Ardından, açmak istediğiniz karenin numarasını (0-24 arası) girmelisiniz.

| 0 | 1 | 2 | 3 | 4 |
_____________________
| 5 | 6 | 7 | 8 | 9 |
_____________________
|10 |11 |12 |13 |14 |
_____________________
|15 |16 |17 |18 |19 |
_____________________
|20 |21 |22 |23 |24 |

T: Güvenli bölge (Açıldı)

X: Mayın (Oyun bittiğinde görünür)

📋 Kod Yapısı
pen() fonksiyonu: Oyun tahtasını her hamleden sonra ekrana güncel haliyle bastırır.

rand(): Mayınların her oyunda farklı yerlere rastgele yerleştirilmesini sağlar.

while döngüleri: Oyunun kazanma veya kaybetme durumuna kadar akışını yönetir.

Geliştirme Önerileri (Todo)
Gelecekte eklemeyi düşündüğüm özellikler:

[ ] Etraftaki mayın sayısını gösteren ipucu rakamları.

[ ] Daha büyük harita seçenekleri (10x10, 20x20).

[ ] Skor tablosu.

Geliştiren: [Berat Topuz]

