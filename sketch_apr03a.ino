// Pranav Ramesh

int fw = 4;
int bw = 5 ;
int s = 6;
int p = 10;
int x;
int y;
int clawA = 40;
int z = 11; 

 
void setup() 
{
  Serial.begin(9600);
  pinMode(fw, OUTPUT);
  pinMode(bw, OUTPUT);
  pinMode(s, OUTPUT);
  pinMode(p, INPUT);
  pinMode(clawA, OUTPUT);
}

void loop() 
{

 // Serial.println(z);
  int value = pulseIn(p, HIGH);
  


  if (value >= 1490 && value <= 1890) {
      int x = map(p, 1890, 1490, 0, 255);
      digitalWrite(bw, LOW);
      digitalWrite(fw, HIGH); // Frontwards
      analogWrite(s, x);
  }
  
  else if(value >  1450 && value < 1490) {
     
      digitalWrite(bw, LOW);
      digitalWrite(fw, LOW); // Center
      digitalWrite(s, 0);
  }

  else if(value <= 1450 && value >= 1030){
      int y = map(p, 1450, 1030, 0, 255);
      digitalWrite(fw, LOW);
      digitalWrite(bw, HIGH);   // Backwards
      analogWrite(s, y);   
  }

 
   //  Serial.println(value);
     //Serial.println(x);
}










 
