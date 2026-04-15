int trig=14;
int echo=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,0);
  delayMicroseconds(5);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  float echotime=pulseIn(echo,1);
  float value=echotime/29.4/2;
  Serial.println("value:"+String(value));
  delay(50);
}
