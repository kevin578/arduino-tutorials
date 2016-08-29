void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  for (int i = 8; i <= 14; i++) {

  digitalWrite(i, HIGH);
  delay(500);
  }
  for (int i = 13; i >= 8; i--){
    digitalWrite(i, LOW);
    delay(500);
  }
}


