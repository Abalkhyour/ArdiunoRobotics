const int trigPin = A1;
const int echoPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);







  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // low for 2 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // high for 10 microseconds
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  if ( distance <= 79 || distance >= 1) {
    // programming it to detect if anything less then or equal to 12cm close


    digitalWrite (2, LOW);
    digitalWrite (3, HIGH);
    analogWrite (5, 255);
    digitalWrite (4, HIGH);
    digitalWrite (9, LOW);
    analogWrite (10, 200);
    digitalWrite (8, HIGH);
    digitalWrite (7, LOW);
    analogWrite (6, 200);


  } else {

  }
  if ( distance >= 79 || distance <= 1) {
    // programming it to detect if anything less then or equal to 12cm close


    digitalWrite (2, LOW);
    digitalWrite (3, LOW);
    analogWrite (5, LOW);
    digitalWrite (4, LOW);
    digitalWrite (9, LOW);
    analogWrite (10, LOW);
    digitalWrite (8, LOW);
    digitalWrite (7, LOW);
    analogWrite (6, LOW);


  } else {

  }
}
