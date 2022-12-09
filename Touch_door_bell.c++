int Touchsensor =3;
int led =13;
int buzzer =12;
void setup() {
 Serial.begin(9600);
  pinMode (led,OUTPUT);
  pinMode (buzzer,OUTPUT);
  pinMode (Touchsensor,INPUT);
  }
void loop() {
 if (digitalRead(Touchsensor)==HIGH)
 {
  digitalWrite (led,HIGH);
  digitalWrite (buzzer,HIGH);
  Serial.println ("Led ON");
  delay (1000);
  digitalWrite (led,LOW);
  digitalWrite (buzzer,LOW);
  Serial.println ("Led OFF");
  delay (1000);
 } 
 }
