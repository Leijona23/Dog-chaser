#include <Servo.h>
//x is a place holder, not an intialized variable.
int trig = 12;
int echo = 13;
int motor1PinOne = 3; //Output 7 on the H-bridge
int motor1PinTwo = 4; //Output 2 on the H-bridge
int speedPinOne = 9;
int motor2PinOne = x;
int motor2PinTwo = x;
int speedPinTwo = x
int speed;

void setup() {
  Serial.begin(9600);
  //Motor 1
   pinMode(motor1PinOne, OUTPUT);
   pinMode(motor1PinTwo, OUTPUT);
   pinMode(speedPinOne, OUTPUT);

   digitalWrite(speedPin1, HIGH);
  
   //Motor 2
   pinMode(motor2pinOne, OUTPUT);
   pinMode(motor2PinTwo, OUTPUT);
   pinMode(speedPinTwo, OUTPUT);

   digitalWrite(speedPinTwo, HIGH);
}

void loop() {

//Motor Code
speed = 200;
digitalWrite(motor1PinOne, LOW); 
digitalWrite(motor2PinOne, HIGH); 
digitalWrite(motor1PinTwo, LOW); 
digitalWrite(motor2PinTwo, HIGH); 
digitalWrite(speedPinOne, speed); //200 Is our test speed and default speed for both motors
digitalWrite(speedPinTwo, speed);


//Establishes long object with important data
long duration, inches, cm;

pinMode(trig, OUTPUT);
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(5);
digitalWrite(trig, LOW);

pinMode(echo,INPUT);
//Sets reading pin
duration = pulseIn(echo, HIGH);

//Gets current distance from nearby object
inches = microsecondsToInches(duration);
//Checks to see if car is less than or 3 inches away and adjusts servo behavior accordingly.
if(inches <= 3){ 
  digitalWrite(motor1PinOne, LOW); 
  digitalWrite(motor2PinOne, HIGH); 
  digitalWrite(motor1PinTwo, LOW); 
  digitalWrite(motor2PinTwo, HIGH); 
  }
}

long microsecondsToInches(long microseconds){
return microseconds / 74 / 2;
}
