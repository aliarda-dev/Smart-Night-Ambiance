🌙 Smart Ambient Lighting System (LDR-Controlled)

Bu çalışma, Akdeniz Üniversitesi Elektrik-Elektronik Mühendisliği 1. sınıf öğrencisi olarak gerçekleştirdiğim, analog sensör verisini (LDR) işleyerek fiziksel bir çıktıya (LED) dönüştürdüğüm ilk gömülü sistem (Embedded Systems) projemdir. Projede, ortam ışığını ölçüp otonom bir tepki veren "Akıllı Aydınlatma" mantığı kurgulanmıştır.

🛠️ Teknik Özellikler

Donanım Paketi: Arduino Uno, LDR (Fotorezistör), 1x LED, 1x 10kΩ Direnç (Gerilim Bölücü için), 1x 330Ω Direnç (LED için).

Kontrol Mantığı: Gerilim Bölücü (Voltage Divider) prensibi kullanılarak, LDR üzerindeki direnç değişimleri Arduino’nun ADC (Analog-to-Digital Converter) birimi sayesinde A0 pininden 0-1023 arasında dijital veriye dönüştürülür.


📖 Mühendislik Kazanımları

Analog Sinyal İşleme: Sürekli (analog) verinin okunması ve yazılımda bir "Eşik Değeri" (Threshold) ile karara bağlanması.

Devre Tasarımı: Gerilim bölücü devresi kurma, direnç hesaplamaları ve ortak toprak (GND) hattı yönetimi.

Veri İzleme: Serial Monitor üzerinden gerçek zamanlı veri akışının analizi (Debugging).

💡 Gelecek Vizyonu (Scalability)

Bu temel yapı, sadece sensör tipini değiştirerek (örneğin MQ serisi gaz sensörleri ekleyerek) akıllı ev güvenlik sistemlerine veya endüstriyel otomasyon sistemlerine kolayca genişletilebilir bir mimariye sahiptir.
