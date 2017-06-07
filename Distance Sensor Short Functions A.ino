const int trigPin = 3;
const int echoPin = 11;

void setup() {
  // put your setup code here, to run once:
pinMode (2, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (12, OUTPUT); 
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
  distance = (duration/2) / 29.1;
    
  if ( distance >= 12){    
    // programming it to detect if anything less then or equal to 12cm close

    Forward();
// programing it to keep going straight

    
  } else {

    
    // unless detecting something too close then to reverse
  Reverse();
  
    // then to rotate right, roughly 90 degree to the right
    RightTurn();
  }
}
