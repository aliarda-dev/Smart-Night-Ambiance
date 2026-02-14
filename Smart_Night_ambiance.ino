//Smart Night Ambiance Project
//Ali Arda Kocabörek | Akdeniz EEE

int isik_degeri=0;

void setup(){

  Serial.begin(9600); //Buradaki amac odanin isiktaki esik degerini anlayip asagidaki if blogunu esik degeri bulunan sayiya gore ozellestirmek
  pinMode(2,OUTPUT);
}

void loop(){

  isik_degeri=analogRead(A0);

  Serial.println(isik_degeri);

  if(isik_degeri<200){ //Goruldugu gibi ben burada odamdaki isik degerinin esigini 200 olarak aldim
    digitalWrite(2,HIGH);
  }

  else{
    digitalWrite(2,LOW);
  }
}
