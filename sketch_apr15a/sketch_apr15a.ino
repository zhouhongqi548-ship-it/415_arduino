int b = 1;
void setup() {
  Serial.begin(9600);
  pinMode(39,INPUT);
  pinMode(16,OUTPUT);

}

void loop() {
  int a =digitalRead(39);
    if (a==0)
  {
    digitalWrite(16,!digitalRead(16));
    delay(100);
  }

}
