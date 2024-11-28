
#define LED 7
char palavra;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  while (Serial.available() == 0) {
    
  }
}

void loop()
{
  palavra = Serial.read();
  if (palavra == 'R') {
    digitalWrite(LED, HIGH);

  }
  else if (palavra == 'Y') {
    digitalWrite(LED, HIGH);
    delay(750);
    digitalWrite(LED, LOW);
    delay(750);
    digitalWrite(LED, HIGH);
    delay(750);
    digitalWrite(LED, LOW);
    delay(750);
  }
  else if (palavra == 'G') {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
  while (Serial.available() == 0) {
    
  }
}
