void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9200);
}

void loop()
{
  int dadoTapete = analogRead(A0);
  Serial.println(dadoTapete);
  delay(1000);
}
