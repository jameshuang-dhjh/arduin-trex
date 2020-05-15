#include <Servo.h>
Servo myservo;

void setup() {
  myservo.attach(13);
}

void loop() {
  myservo.write(20);
  delay(2000);
  myservo.write(170);
  delay(2000);
}
