int LED = 8;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  int LDR = analogRead(A0);
  if(LDR > 500) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  Serial.println(LDR);
  delay(500);
}