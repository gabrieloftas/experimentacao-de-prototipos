//Entrada 1 e 2(Motor 1)
//Entrada 3 e 4(Motor 2)
int turn_motor1=6;
int turn_motor2=7;


const int motor1_pin1 = 9;
const int motor1_pin2 = 3;


const int motor2_pin1 = 10;
const int motor2_pin2 = 5;

void setup()
{
  pinMode(turn_motor1, INPUT);
  pinMode(turn_motor2, INPUT);
  
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);

  
  pinMode(motor2_pin1, OUTPUT);
  pinMode(motor2_pin2, OUTPUT);
}

void loop()
{
  bool motor1_active = digitalRead(turn_motor1);
  bool motor2_active = digitalRead(turn_motor2);
  if (motor1_active && motor2_active){
      digitalWrite(motor1_pin1,HIGH);
      digitalWrite(motor1_pin2,LOW);
      digitalWrite(motor2_pin1,LOW);
      digitalWrite(motor2_pin2,HIGH);
  }
  else if(motor1_active==HIGH && motor2_active==LOW){
   	  digitalWrite(motor1_pin1,HIGH);
      digitalWrite(motor1_pin2,LOW);
      digitalWrite(motor2_pin1,LOW);
      digitalWrite(motor2_pin2,LOW);
  }
   else if(motor1_active==LOW && motor2_active==HIGH){
   	  digitalWrite(motor1_pin1,LOW);
      digitalWrite(motor1_pin2,LOW);
      digitalWrite(motor2_pin1,LOW);
      digitalWrite(motor2_pin2,HIGH);
  }
  else {
  	digitalWrite(motor1_pin1,LOW);
      digitalWrite(motor1_pin2,LOW);
      digitalWrite(motor2_pin1,LOW);
      digitalWrite(motor2_pin2,LOW);
  }
  delay(1000);
}
