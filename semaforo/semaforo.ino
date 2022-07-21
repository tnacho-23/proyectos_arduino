//Declaración de pines
int btn = 2;
int green = 3;
int yellow = 4;
int red = 5;


void setup() {
  pinMode(btn, INPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
}

void loop() {
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  pedestrain();
  delay(1000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  pedestrain();
  digitalWrite(red,HIGH);
  pedestrain();
  delay(1000);
  pedestrain();
  delay(1000);
  pedestrain();
  delay(1000);
  pedestrain();
  delay(1000);
  pedestrain();
  delay(1000);
  
}

void pedestrain(){
  if (digitalRead(btn) == HIGH){
    loop();
  }
  
}
