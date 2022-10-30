
int infr = 11;
void setup() {
  Serial.begin(9600);
  pinMode(infr, INPUT);
}

void loop() {
  int read = digitalRead(infr);
  Serial.print(read);
  Serial.print(" ");
  delay(300);
}
