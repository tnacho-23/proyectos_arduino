int STBY = 4;
int AIN1 = 2;
int AIN2 = 3;
int PWMA = 5;

void setup() {
  pinMode(STBY, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  digitalWrite(STBY,HIGH);
}


void loop() {
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  analogWrite(PWMA,255);
}
