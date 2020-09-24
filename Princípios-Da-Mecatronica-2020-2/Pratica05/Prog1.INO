void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  //Aciona as saídas
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  
  delay(500); // Wait for 1000 millisecond(s)
  
  //Desliga as saídas
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
 
  delay(500); // Wait for 1000 millisecond(s)
}
