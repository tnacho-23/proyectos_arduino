int  btn = 3;
int led =13;
void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led,LOW);
  int valor = digitalRead(btn);
  if (valor == 1){
     digitalWrite(led,HIGH);
  }

}
