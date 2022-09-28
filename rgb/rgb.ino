#include <Servo.h>

Servo servoMotor;

void setup(){
    servoMotor.attach(9);
}

void loop(){
    servoMotor.write(90);
    delay(1000);
    servoMotor.write(180);
    delay(1000);

    for(int i=0; i<180; i++){
        servoMotor.write(i);
        delay(20);
    }
}