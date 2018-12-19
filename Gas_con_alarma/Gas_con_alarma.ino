int buzzer = 10;
int smokeA0 = A5;
int sensorThres = 400;
void setup() {
 
    pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
   tone(buzzer, 1000, 200);
   digitalWrite(13, HIGH);
  }
  else
  {
    noTone(buzzer);
    digitalWrite(13, LOW);
  }
  delay(1000);
}
