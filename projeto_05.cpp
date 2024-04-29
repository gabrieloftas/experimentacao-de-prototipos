#include <Servo.h>

Servo servo;

void setup() {
  pinMode(A0, INPUT);
  servo.attach(4);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0)); // Envia o valor da leitura analógica pela porta serial

  while (analogRead(A0) < 400) {
    servo.write(30);
    Serial.println("Estou no If");
  }
  servo.write(0);
  delay(500);
}
