  #include <Servo.h>

  Servo xservo; 

void setup()
{
 xservo.attach(40);
}

void loop()
{
  
  xservo.write(255);
  delay(15);    
  
}
