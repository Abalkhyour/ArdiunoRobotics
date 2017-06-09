void setup() {
  Serial.begin(9600);

}

void loop() {
  int n1 = 5;
  int n2 = 10;
  int n3 = 20;
  int ANS;

  ANS = AvrgFunct (n1, n2, n3);
  Serial.println(ANS);
  delay(500);
}


int AvrgFunct (int x, int y, int z)
{
  int Result;
  Result = (x + y + z) / 3;
  return Result;
}
