
void setup()
{ 
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
 
}

void loop()
{
  int TMP = analogRead(A0);
  Serial.println(TMP);
  delay(1000);
  
  if (TMP > 300)
  {
   digitalWrite(13,1);
  }
  else
  {
   digitalWrite(13,0);
  }
}