//Entrada 1 e 2(Motor 1)
//Entrada 3 e 4(Motor 2)
int frente=2;
int tras=4;
int esquerda=7;
int direita=8;
int pwm_motor1=6;
int pwm_motor2=11;

const int motor1_pin1 = 9;
const int motor1_pin2 = 3;


const int motor2_pin1 = 10;
const int motor2_pin2 = 5;

void setup()
{
  pinMode(frente, INPUT);
  pinMode(tras, INPUT);
  pinMode(esquerda, INPUT);
  pinMode(direita, INPUT);
  
  
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);

  
  pinMode(motor2_pin1, OUTPUT);
  pinMode(motor2_pin2, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  Serial.println("Loop");
  
  bool motor1_active = digitalRead(frente);
  bool motor2_active = digitalRead(tras);
  bool motor3_active = digitalRead(esquerda);
  bool motor4_active = digitalRead(direita);
  
  if (motor1_active == HIGH) {
    Serial.println("Frente");
    analogWrite(pwm_motor1, 244);
    analogWrite(pwm_motor2, 244);
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);
  } else if (motor2_active == HIGH) {
    Serial.println("Trás");
    analogWrite(pwm_motor1, 244);
    analogWrite(pwm_motor2, 244);
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, HIGH);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, HIGH);
  } else if (motor3_active == HIGH) {
    Serial.println("Esquerda");
    analogWrite(pwm_motor1, 122);
    analogWrite(pwm_motor2, 244);
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);
  } else if (motor4_active == HIGH) {
    Serial.println("Diretia");
    analogWrite(pwm_motor1, 244);
    analogWrite(pwm_motor2, 122);
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);
  } else {
    // Parar todos os motores se nenhum botão estiver pressionado
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, LOW);
  }
}
