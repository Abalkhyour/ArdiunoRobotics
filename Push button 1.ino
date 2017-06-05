 int pushButton = 13;
// using pin 13 for the button



void setup() { 
  // put your setup code here, to run once:
pinMode (2, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (12, OUTPUT); 
  Serial.begin (9600);
  pinMode(pushButton, INPUT); 
  // telling arduino that the puchbutton as an input
  
}

void loop() {
  

  int buttonCondition= digitalRead(pushButton);
// Reading the Button whether it is pressed or not (CONDITION)

  

  Serial.println(buttonCondition);
  

  if (buttonCondition > 0) {
  // most of the Readings are zero, but when button is pressed it is 1. there for telling it anything above 0 is when it starts the sequence
  
   digitalWrite (2, HIGH);
    digitalWrite (4, LOW);
    analogWrite (6, 250);
    digitalWrite (8, HIGH);
    digitalWrite (10, LOW);
    analogWrite (12, 250);
    delay (2000);
    // Clockwise


    
    digitalWrite (2, LOW);
    digitalWrite (4, HIGH);
    analogWrite (6, 250);
    digitalWrite (8, LOW);
    digitalWrite (10, HIGH);
    analogWrite (12, 250);
    delay (2000);
    // counter clockwise



    
    digitalWrite (2, LOW);
    digitalWrite (4, HIGH);
    analogWrite (6, 250);
    digitalWrite (8, HIGH);
    digitalWrite (10, LOW);
    analogWrite (12, 250);
    delay (2000);
    // Straight


    
     digitalWrite (2, HIGH);
    digitalWrite (4, LOW);
    analogWrite (6, 250);
    digitalWrite (8, LOW);
    digitalWrite (10, HIGH);
    analogWrite (12, 250);
    delay (2000); 
    //backwards


    



 digitalWrite (2, LOW);
    digitalWrite (4, LOW);
    analogWrite (6, LOW);
    digitalWrite (8, LOW);
    digitalWrite (10, LOW);
    analogWrite (12, LOW);
    // sequence is it rotates clockwise for a few seconds,turn counter clockwise for a few seconds, go straight for a few seconds, then go back for a few seconds
    
        }
}

