void Forward() {
    digitalWrite (2, LOW);
    digitalWrite (4, HIGH);
    analogWrite (6, 250);
    digitalWrite (8, HIGH);
    digitalWrite (10, LOW);
    analogWrite (12, 250);
}


void Reverse() {
    digitalWrite (2, HIGH);
    digitalWrite (4, LOW);
    analogWrite (6, 250);
    digitalWrite (8, LOW);
    digitalWrite (10, HIGH);
    analogWrite (12, 250);
    delay(600);

}



void RightTurn() {
  digitalWrite (2, HIGH);
    digitalWrite (4, LOW);
    analogWrite (6, LOW);
    digitalWrite (8, HIGH);
    digitalWrite (10, LOW);
    analogWrite (12, 250);
    delay(850);
    
}
