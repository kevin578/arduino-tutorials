int north_red = 13;
int north_yellow = 12;
int north_green = 11;

int button = 7;
void setup() {
pinMode(north_red, OUTPUT);
pinMode(north_yellow, OUTPUT);
pinMode(north_green, OUTPUT);

Serial.begin(9600);
pinMode(button, INPUT);
}

void loop() {
bool button_press = digitalRead(button);
Serial.print(button_press);

/*digitalWrite(north_green, HIGH);
delay(2000);
digitalWrite(north_green, LOW);
digitalWrite(north_yellow, HIGH);
delay(500);
digitalWrite(north_yellow, LOW);
digitalWrite(north_red, HIGH);
delay(2000);
digitalWrite(north_red, LOW);*/
}
