#include <Servo.h>
Servo bob;
void setup() {
  bob.attach(5);
}

void loop() {
  for (int i=0; i<180; i++) {
    bob.write(i);
    delay(10);
  }
  for (int i=180; i>0; i--) {
    bob.write(i);
    delay(10);
  }
}
