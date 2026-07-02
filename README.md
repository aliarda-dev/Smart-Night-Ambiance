🌙 Smart Ambient Lighting System (LDR-Controlled)
LDR (fotorezistör) ile ortam ışığını ölçen, karanlıkta otomatik olarak LED'i açan basit bir akıllı aydınlatma prototipi.

🛠️ Donanım

Arduino Uno
LDR (Fotorezistör)
1x LED
10kΩ Direnç (gerilim bölücü)
330Ω Direnç (LED koruma)

⚙️ Nasıl Çalışır?

LDR ve 10kΩ direnç gerilim bölücü oluşturur
A0 pininden ADC ile 0-1023 arası değer okunur
Belirlenen threshold değerinin altına düşülürse LED yanar
Serial Monitor üzerinden anlık sensör değeri izlenebilir

📖 Teknik Notlar

Gerilim bölücü prensibi ile analog sinyal dijitale çevrildi
Threshold değeri deneme-yanılma ile ayarlandı, ortama göre değişir

💡 Geliştirme Fikirleri

Adaptive threshold (hareketli ortalama ile)
PWM ile ışık şiddetine orantılı parlaklık
MQ serisi sensör ekleyerek gaz algılamaya genişletme

🎥 Proje Demo Videosu

Sistemin çalışma videosunu aşağıdan izleyebilirsiniz.

https://github.com/user-attachments/assets/69747c30-c749-4ff2-bb1d-25689b94c900


