#include <Servo.h>
Servo servo;
int inter=4;
void setup()
{
  servo.attach(2);
  servo.write(0);
  pinMode(inter,INPUT);
  
}
	
void loop(){
  int angulo=analogRead(0);
  angulo=map(angulo,0,1023,0,180);
  if (digitalRead(inter)==HIGH){

  servo.write(angulo);
  delay(1000);
  }
  else if(digitalRead(inter)==LOW){
  servo.write(angulo);
    
  
  }
}
