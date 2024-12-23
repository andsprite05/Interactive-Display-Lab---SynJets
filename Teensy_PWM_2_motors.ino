#include <iostream>
int pwm1 = 0;
int pwm2 = 0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  Serial.println("Arduino Ready");
}
void loop() {
  if (Serial.available() >= 2) {
    Serial.println("Enter bytes: "); 
    pwm1 = Serial.read();
    pwm2 = Serial.read();
    
    Serial.print("Motor 1 PWM: ");
    Serial.println(pwm1);
    Serial.print("Motor 2 PWM: ");
    Serial.println(pwm2);

    analogWriteFrequency(3,150);
    analogWriteFrequency(4,150);
    analogWrite(3, pwm1);
    analogWrite(4, pwm2);
    }
}
