#include <Servo.h>

Servo thumb, fingers;

int analogpin = 3;
int val = 0;

void setup() 
{
  fingers.attach(5);
  thumb.attach(8);
  Serial.begin(9600);

}

void loop() 
{
  val = analogRead(analogpin);
  Serial.println(val);
  if ( val>800)
  {
    thumb.write(180);
    fingers.write(180);
    delay(100);
  }
 else{
    thumb.write(0);
    fingers.write(0);
    delay(100);
    }
}
