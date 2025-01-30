void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int d = 500;
  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);
  delay(d);

}
