int button = 7;
int last_light;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  
  if (digitalRead(button) == HIGH){
  
    for (int i = 8; i <= 13; i++) {

      digitalWrite(i, HIGH);
      delay(500);
      last_light = i;
      if (digitalRead(button) == LOW){
      break;
        }
    }
  
    
    for (int i = last_light; i >= 8; i--){
      digitalWrite(i, LOW);
      delay(500);
      }
    }
}




