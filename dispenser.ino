/*
Adjust the following variables to suit your needs!

- The flowrate: how much milliseconds the servo will remain in a down 
  position to allow the flowing of the fluid      */
int flow_delay = 1000;

/*  - The After Flow Delay: The amount of ms that the servo will wait to
      dispense fluid again         */
int after_flow_delay = 4000; 

/*  - Distance (cm) that you want it to be activated
      and/or deactivated if the object is too close 
      and not under the waterway    */
int activation_dist = 25;  //25cm
int deactivation_dist = 10; //10cm

/* SETUP DONE */


#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;



long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
pinMode(LED_BUILTIN, OUTPUT);
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object

}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

if (distance <= activation_dist) {
  if (distance <= deactivation_dist) {
    digitalWrite(LED_BUILTIN, LOW);  
  }
  else {
    digitalWrite(LED_BUILTIN, HIGH);
    myservo.write(145);
    myservo.write(100);
    delay(flow_delay);
    myservo.write(145);
    delay(after_flow_delay);  
  }

    }

if (distance >= activation_dist) {
  digitalWrite(LED_BUILTIN, LOW);
     }
if (distance <= 10 ) {
  digitalWrite(LED_BUILTIN, LOW);  
  }
delay(100);

}
