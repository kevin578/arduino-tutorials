int north_red = 13;
int north_yellow = 12;
int north_green = 11;
int south_green = 10;
int south_yellow = 9;
int south_red = 8;

int button = 7;
void setup() {
pinMode(north_red, OUTPUT);
pinMode(north_yellow, OUTPUT);
pinMode(north_green, OUTPUT);

Serial.begin(9600);
pinMode(button, INPUT);
}

void loop() {

stoplight();
delay(2000);
}
