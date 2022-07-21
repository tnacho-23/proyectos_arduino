
int infr = A0;
void setup() {
  Serial.begin(9600);
  pinMode(infr, INPUT);
}

void loop() {
  int read = digitalRead(infr);
  Serial.print(read);
  delay(50);
}
