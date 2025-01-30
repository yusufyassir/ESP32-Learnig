void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("hello");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("hello3");
  if (Serial.available() > 0){
    Serial.println("hello2");
    String recivedData = Serial.readString();
    Serial.print("Recived data: ");
    Serial.println(recivedData);
  }
}
