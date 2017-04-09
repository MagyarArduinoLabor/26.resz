/* 26.rész - Az esőszenzor

   Készítette: Kotán Tamás Balázs - Magyar Arduino Labor

   Győr, 2017.03.24.
*/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int szenzor = analogRead(A0);
  Serial.println(szenzor);
  if (szenzor < 1020)
  {
    Serial.println("Esik eső karikára...");
  }
  else
  {
    Serial.println("Nem esik.");
  }
  delay(2000);
}
