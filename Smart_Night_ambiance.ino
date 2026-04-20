//Smart Night Ambiance Project
//Ali Arda Kocabörek | Akdeniz EEE

#include <Arduino.h>
#define KLED_PIN 2

void isik_degeri(void);



int main(void){
	
	init();
	
	Serial.begin(9600);
	
	pinMode(KLED_PIN,OUTPUT);
	
	isik_degeri();
	
	
	
}

void isik_degeri(void){
	
	while(1){
		
	int isik_kontrol_degeri=analogRead(A0);
	
	Serial.println(isik_kontrol_degeri); //Bulunulan ortamın isik degerinin esigini bulmak icin
	
	(isik_kontrol_degeri>200) ? digitalWrite(KLED_PIN,LOW) : digitalWrite(KLED_PIN,HIGH);
		
	}
	
	delay(50)
	
}
