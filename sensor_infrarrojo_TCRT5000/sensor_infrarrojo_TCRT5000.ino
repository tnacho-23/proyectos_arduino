
int infr = A0;
void setup() {
  Serial.begin(9600);
  pinMode(infr, INPUT);
}

void loop() {
  int read = analogRead(infr);
  Serial.print(read);
  Serial.print(" ");
  delay(2000);
}
