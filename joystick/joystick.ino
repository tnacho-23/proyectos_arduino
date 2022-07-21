const int btn = 2; // Botón en el pin 2
const int X = A0; // Eje X
const int Y = A1; // EJE Y

void setup() {
  pinMode(btn, INPUT);
  digitalWrite(btn, HIGH);
  Serial.begin(9600);
}

void loop() {
 Serial.print("X:");
 Serial.print(analogRead(X));
 Serial.print("Y:");
 Serial.print(analogRead(Y));
 delay(2000);
}
