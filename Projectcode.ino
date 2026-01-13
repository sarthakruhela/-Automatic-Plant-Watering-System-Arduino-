int sensorPin = A0;
int motorPin  = 7;
int ledPin    = 6;
int buzzerPin = 9;      // buzzer pin
int threshold = 500;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int sensorVal = analogRead(sensorPin);

  if (sensorVal < threshold) {   // Soil is DRY
    digitalWrite(motorPin, HIGH);   // Pump ON
    digitalWrite(ledPin, HIGH);     // LED ON
    digitalWrite(buzzerPin, HIGH);  // Buzzer ON
  } 
  else {                          // Soil is WET
    digitalWrite(motorPin, LOW);    // Pump OFF
    digitalWrite(ledPin, LOW);      // LED OFF
    digitalWrite(buzzerPin, LOW);   // Buzzer OFF
  }

  delay(1000);
}
