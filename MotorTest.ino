#include <AFMotor.h>

M1 motor1(1);
M2 motor2(2);
M3 motor3(3);
M4 motor4(4);

int time = 1000;

void setup() {
  motor1.setSpeed(100);
  motor1.run(RELEASE);

  motor2.setSpeed(100);
  motor2.run(RELEASE);

  motor3.setSpeed(100);
  motor3.run(RELEASE);

  motor4.setSpeed(100);
  motor4.run(RELEASE);
}

void loop() {
  motor1.run(FORWARD);
  delay(time);
  motor1.run(BACKWARD);
  delay(time);
  motor1.run(RELEASE);
  delay(time);

  motor2.run(FORWARD);
  delay(time);
  motor2.run(BACKWARD);
  delay(time);
  motor2.run(RELEASE);
  delay(time);

  motor3.run(FORWARD);
  delay(time);
  motor3.run(BACKWARD);
  delay(time);
  motor3.run(RELEASE);
  delay(time);

  motor4.run(FORWARD);
  delay(time);
  motor4.run(BACKWARD);
  delay(time);
  motor4.run(RELEASE);
  delay(time);
}
