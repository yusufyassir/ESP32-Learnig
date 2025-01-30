#define PWM_PIN 23

void setup() {
  // put your setup code here, to run once:
  pinMode(PWM_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int dutyCycle = 0; dutyCycle <=255; dutyCycle++){
    analogWrite(PWM_PIN, dutyCycle);
    delay(15);
  }

}
