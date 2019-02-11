//#define 

#include <Servo.h>

int analogBase = 0;
int analogShoulder = 0;
int analogArm = 0;
int analogHand = 0;
int analogRotBase = 0;

byte servoBase1 = 0;
byte servoBase2 = 0;

byte servoShoulder = 0;
byte servoArm = 0;
byte servoHand = 0;
byte servoRotBase = 0;

  Servo sBase1;
  Servo sBase2;
  
  Servo sShoulder;
  Servo sArm;
  Servo sHand;

  Servo sRotBase;

void setup() {
  // put your setup code here, to run once:
  sBase1.attach(11);
  sShoulder.attach(10);
  sArm.attach(9);
  sHand.attach(6);
  sBase2.attach(5);
  sRotBase.attach(3);
  
  Serial.begin(9600);
  Serial.println("Cute ArmBot servo test");
}

void loop() {
    // put your main code here, to run repeatedly:
  analogBase = analogRead(A0);
  analogShoulder = analogRead(A1);
  analogArm = analogRead(A2);
  analogHand = analogRead(A3);
  analogRotBase = analogRead(A4);
  
  servoBase1 = map(analogBase, 0, 1023, 0, 255);
  // inverting value
  servoBase2 = map(analogBase, 0, 1023, 255, 0);
  if(servoBase2 >= 80) { servoBase2 -= 80; }
  else servoBase2 = 0;
  
  servoShoulder = map(analogShoulder, 0, 1023, 0, 255);
  servoArm = map(analogArm, 0, 1023, 0, 255);
  servoHand = map(analogHand, 0, 1023, 0, 255);
  servoRotBase = map(analogRotBase, 0, 1023, 0, 255);
  
  Serial.print("Base1: ");
  Serial.println(servoBase1);
  Serial.print("Base2: ");
  Serial.println(servoBase2);
  
  Serial.print("Shoulder: ");
  Serial.println(servoShoulder);
  Serial.print("Arm: ");
  Serial.println(servoArm);
  Serial.print("Hand: ");
  Serial.println(servoHand);
  Serial.print("Rot Base: ");
  Serial.println(servoRotBase);
  Serial.println("---------");

  sBase1.write(servoBase1);
  sBase2.write(servoBase2);
  
  sShoulder.write(servoShoulder);
  sArm.write(servoArm);
  sHand.write(servoHand);

  sRotBase.write(servoRotBase);
  delay(15);
  
}
