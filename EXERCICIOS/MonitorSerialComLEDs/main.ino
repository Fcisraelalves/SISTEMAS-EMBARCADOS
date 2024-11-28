#define LED 7
int bytes;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  while (Serial.available() == 0) {
    
  }
}

void loop() {
  bytes = Serial.parseInt();
  for (int i = 0; i < bytes; i++) {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
  while (Serial.available() == 0) {
    
  }
}
