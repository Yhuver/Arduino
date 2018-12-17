void setup(){
  pinMode(13, OUTPUT); /* Pin 13 como salida*/
}
void loop(){
  digitalWrite(13, HIGH); /* pin 13 a nivel alto (1)*/ 
  delay(5000);            /*demora 2 seg*/
  digitalWrite(13, LOW);  /*pin 13 a nivel bajo(0)*/
  delay(5000);            /*demora 2 seg*/
}
