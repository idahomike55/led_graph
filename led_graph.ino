int bar1 = 2;
int bar2 = 3;
int bar3 = 4;
int bar4 = 5;
int bar5 = 6;
int bar6 = 7;
int bar7 = 8;
int bar8 = 9;
int bar9 = 10;
int bar10 = 11;
int del = 100;

void setup()
{
  pinMode(bar1, OUTPUT);
  pinMode(bar2, OUTPUT);
  pinMode(bar3, OUTPUT);
  pinMode(bar4, OUTPUT);
  pinMode(bar5, OUTPUT);
  pinMode(bar6, OUTPUT);
  pinMode(bar7, OUTPUT);
  pinMode(bar8, OUTPUT);
  pinMode(bar9, OUTPUT);
  pinMode(bar10, OUTPUT);
}

void loop()
{
  digitalWrite(bar1, HIGH);
  delay(del);
  digitalWrite(bar2, HIGH);
  delay(del);
  digitalWrite(bar3, HIGH);
  delay(del);
  digitalWrite(bar4, HIGH);
  digitalWrite(bar1, LOW);
  delay(del);
  digitalWrite(bar5, HIGH);
  digitalWrite(bar2, LOW);
  delay(del);
  digitalWrite(bar6, HIGH);
  digitalWrite(bar3, LOW);
  delay(del);
  digitalWrite(bar7, HIGH);
  digitalWrite(bar4, LOW);
  delay(del);
  digitalWrite(bar8, HIGH);
  digitalWrite(bar5, LOW);
  delay(del);
  digitalWrite(bar9, HIGH);
  digitalWrite(bar6, LOW);
  delay(del);
  digitalWrite(bar10, HIGH);
  digitalWrite(bar7, LOW);
  delay(del);
  digitalWrite(bar8, LOW);
  delay(del);
  digitalWrite(bar9, LOW);
  delay(del);
  digitalWrite(bar10, LOW);
  delay(del);
  
  digitalWrite(bar10, HIGH);
  delay(del);
  digitalWrite(bar9, HIGH);
  delay(del);
  digitalWrite(bar8, HIGH);
  delay(del);
  digitalWrite(bar7, HIGH);
  digitalWrite(bar10, LOW);
  delay(del);
  digitalWrite(bar6, HIGH);
  digitalWrite(bar9, LOW);
  delay(del);
  digitalWrite(bar5, HIGH);
  digitalWrite(bar8, LOW);
  delay(del);
  digitalWrite(bar4, HIGH);
  digitalWrite(bar7, LOW);
  delay(del);
  digitalWrite(bar3, HIGH);
  digitalWrite(bar6, LOW);
  delay(del);
  digitalWrite(bar2, HIGH);
  digitalWrite(bar5, LOW);
  delay(del);
  digitalWrite(bar1, HIGH);
  digitalWrite(bar4, LOW);
  delay(del);
  digitalWrite(bar3, LOW);
  delay(del);
  digitalWrite(bar2, LOW);
  delay(del);
  digitalWrite(bar1, LOW);
  delay(del);  
}

