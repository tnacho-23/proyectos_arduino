#include <Servo.h>
Servo servo;
const int X = A0; 

void setup() {
  servo.attach(2);
  Serial.begin(9600);
  }

void loop() {
  int x = analogRead(X);
  int angle = map(x, 0, 1023, 0, 180);
  servo.write(angle);
  Serial.print(angle);
  Serial.print(" ");
  delay(10);
}
