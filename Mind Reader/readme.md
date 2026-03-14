# Sayı Tahmin Oyunu (Yapay Zeka - İkili Arama)

Bu proje, C dili kullanılarak geliştirilmiş, terminal tabanlı bir **Ters Sayı Tahmin Oyunudur**.
Geleneksel oyunların aksine, burada siz bir sayı tutarsınız ve bilgisayar **İkili Arama (Binary Search)** algoritmasını kullanarak
bu sayıyı mümkün olan en kısa sürede bulmaya çalışır.

---

## 🧠 Algoritma Nasıl Çalışır?

Program, her adımda mevcut aralığın tam ortasını hesaplar. Kullanıcının yönlendirmesine göre olasılıkların yarısını eleyerek ilerler.
Bu matematiksel yöntemle, 1-100 arasındaki bir sayı en geç 7. denemede bulunur.

---

## 🎮 Nasıl Oynanır?

1. **1 ile 100 arasında bir sayı tutun.**
2. Bilgisayarın tahminine göre şu komutları girin:
   * `up`: Tuttuğunuz sayı daha **büyükse**.
   * `down`: Tuttuğunuz sayı daha **küçükse**.
   * `true`: Bilgisayar sayınızı **doğru bildiyse**.
3. **Hile Koruması:** Eğer çelişkili cevaplar verirseniz, bilgisayar durumu fark eder ve sizi uyarır.

---

## 🚀 Özellikler

* **Hızlı Çözüm:** İkili arama algoritması ile minimum deneme.
* **Akıllı Kontrol:** `min > max` durumu oluştuğunda hileyi algılama.
* **Basit Arayüz:** Sadece terminal üzerinden hızlı etkileşim.

---

## 🛠️ Kurulum ve Çalıştırma

Terminalinize aşağıdaki komutları sırasıyla yazarak oyunu başlatabilirsiniz:

```bash
# Dosyayı derle
gcc MindReader.c -o MindReader

# Programı çalıştır
./MindReader
