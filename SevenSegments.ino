int time = 1000;
void setup()
{
  for (int i = 2; i <= 8; i++)
    pinMode(i, OUTPUT);
}
//display number2
void loop()
{
  for(int i = 2; i <= 7; i++)
    digitalWrite(i, HIGH);
  delay(time);
  for(int i = 2; i <= 7; i++)
    digitalWrite(i, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 4 || i == 7)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 6 || i == 7)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 2 ||i == 5 || i == 6)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 3 || i == 6)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 7)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 5 || i == 6 || i == 7 || i == 8)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
  for(int i = 2; i <= 8; i++)
  {
    if(i == 6)
      continue;
    digitalWrite(i, HIGH);
  }
  delay(time);
  for(int i = 2; i <= 8; i++)
    digitalWrite(i, LOW);
}
