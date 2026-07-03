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

***Not***

Projenin PCB tasarımı için pil güç kaynaklı gerekli dosyaları yüklendi.

🎥 Proje Demo Videosu

Sistemin çalışma videosunu aşağıdan izleyebilirsiniz.

https://github.com/user-attachments/assets/69747c30-c749-4ff2-bb1d-25689b94c900

-📷 Proje PCB Medyası

<img width="902" height="826" alt="smart-night-ambiance3" src="https://github.com/user-attachments/assets/2e54a2ba-8ccc-4f8c-b7da-96d17c90f70f" />



