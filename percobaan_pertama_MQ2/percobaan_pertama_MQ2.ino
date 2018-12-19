/* Testing MQ-2 GAS sensor with serial monitor
   EDIT: Ogi sinatra
   AT-MO PRODUCTION
   tolong jika menggunakan code ini
   mohon masukan sumber seperti di bawah ini
-------------------------------------------
  "AT-MO PRODUCTION | EDIT BY OGI SINATRA"  
-------------------------------------------
  Catatan: tutorial ini bisa di gunakan di MQ-2,MQ-3,MQ-4 DLL               
*/

const int gasPin = A0; //Pin yang digunakan di pin analog A0


void setup()
{
  Serial.begin(9600); //Initialize serial port - 9600 bps
}

void loop()
{
  Serial.println(analogRead(gasPin));
 
  if (analogRead(gasPin)>200) {
    Serial.println("Los niveles de Gas estan altos");
  }
  delay(1000); // Print value every 1 sec.
}
