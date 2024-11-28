#define LED1 5
#define LED2 6
#define LED3 7
#define B1 10
#define B2 11
#define B3 12
void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(B1, INPUT);
  pinMode(B2, INPUT);
  pinMode(B3, INPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);


}

void loop() {
  int B1State = digitalRead(B1);
  int B2State = digitalRead(B2);
  int B3State = digitalRead(B3);

  if (B1State == HIGH) {
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
  if (B2State == HIGH) {
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
  if (B3State == HIGH) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }

}
