#define LED 7
String binario;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  while (Serial.available() == 0) {
	
  }
}

void loop()
{
  binario = Serial.readString();
  for (int i = 0; i < binario.length(); i++) {
    if (binario[i] == '1') {
      digitalWrite(LED, HIGH);
      delay(200);
      digitalWrite(LED, LOW);
      delay(200);
    }
    else if (binario[i] == '0') {
      delay(1000);
    }
    
  }
  while (Serial.available() == 0) {
	
  }
}
