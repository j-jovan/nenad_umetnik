/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo nogica;
Servo pluca;


int pos = 0;    // variable to store the servo position

void setup() {
  nogica.attach(9);  // attaches the servo on pin 9 to the servo object
  pluca.attach(11);
}

void loop() {
  for (pos = 130; pos <= 160; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    nogica.write(pos);              // tell servo to go to position in variable 'pos'
    delay(75);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 160; pos >= 130; pos -= 1) { // goes from 180 degrees to 0 degrees
    nogica.write(pos);              // tell servo to go to position in variable 'pos'
    delay(75);                       // waits 15ms for the servo to reach the position
  }

  for (pos = 40; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    pluca.write(pos);              // tell servo to go to position in variable 'pos'
    delay(75);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 120; pos >= 40; pos -= 1) { // goes from 180 degrees to 0 degrees
    pluca.write(pos);              // tell servo to go to position in variable 'pos'
    delay(75);                       // waits 15ms for the servo to reach the position
  }
}
