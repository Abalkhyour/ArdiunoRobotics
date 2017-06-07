
int sensorPin1 = A4;    // select the input pin for the potentiometer
int sensorPin2 = A5;    // select the input pin for the potentiometer
int sensorValue1 = 0;  // variable to store the value coming from the sensor
int sensorValue2 = 0;  // variable to store the value coming from the sensor
int difference = sensorValue1 - sensorValue2 ;

#include <Servo.h>
Servo myservo;



void setup() {
  // declare the ledPin as an OUTPUT:
  myservo.attach(7);
  Serial.begin(9600);

}

void loop() {

  sensorValue1 = analogRead(sensorPin1); // update sensorValue1
  sensorValue2 = analogRead(sensorPin2); // update sensorValue2

  difference = abs(sensorValue1 - sensorValue2);

  readSensorValue();

  if (sensorValue1 > sensorValue2 && difference >= 15) {
    myservo.write(90);
    delay(1500);

    //when firstsensor > second sensor and the difference is more than 15 to turn towards the first sensor
  } else if (sensorValue1 < sensorValue2 && difference >= 15) {
    myservo.write(270);
    delay(1500);

    //when firstsensor < second sensor and the difference is more than 15 to turn towards the second sensor
  } else {
    myservo.write(0);
    delay(1500);
  }
}






//FUNCTIONS

void readSensorValue() {
  Serial.print("FirstSensor: ");
  Serial.print(sensorValue1);


  Serial.print(" Sensor 2: ");
  Serial.print(sensorValue2);

  Serial.print(" Difference: ");
  Serial.print(difference);

  Serial.println();
}
