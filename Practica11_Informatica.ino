/*
 * Esto es una practica de el encendido y apagado de dos LEDs, activandose de forma secuencial con intervalos definidos
 * Autor: Mauro Fernandez
 * Data: 12/12/2024
*/


// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(13, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
