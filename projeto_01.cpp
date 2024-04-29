int sensor_de_movimento=2;
int led=5;

void setup()
{
  pinMode(sensor_de_movimento, INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  if (digitalRead(sensor_de_movimento)==1){
  digitalWrite(led,HIGH);
  }
  else{
  digitalWrite(led,LOW);
  }
  
  
}
