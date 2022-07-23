#include <Servo.h>
Servo servo; //el objeto llamado servo, va a ser de tipo Servo

void setup() {
  servo.attach(2);
  Serial.begin(9600);
}

void loop() {
  int angle1 = 90;
  int angle2 = 0;
  int angle3 = 180;
  servo.write(angle1);
  delay(1000);
  servo.write(angle2);
  delay(1000);
  servo.write(angle3);
  delay(1000);
  
  

}
