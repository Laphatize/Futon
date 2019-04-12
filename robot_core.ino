/*
 * Software by Pranav R (Laphatize).
 * Wiring/Circuts by Shashank G, Pranav R, and Yashas A.
 * Welding/Metal Cutting by Andy L and Damien E.
 */

int fw = 4;
int bw = 5;
int s = 6;
int p = 10;
int x;
int y;


void setup() {
  Serial.begin(9600);
  pinMode(fw, OUTPUT);
  pinMode(bw, OUTPUT);
  pinMode(s, OUTPUT);
  pinMode(p, INPUT);
}

void loop() {

  int value = pulseIn(p, HIGH); // Stores values recieved from remote controller.

  if (value >= 1490 && value <= 1890) {
    int x = map(p, 1890, 1490, 0, 255); 
    digitalWrite(bw, LOW);
    digitalWrite(fw, HIGH); 
    analogWrite(s, x);
    
  } else if (value > 1450 && value < 1490) {
    digitalWrite(bw, LOW);
    digitalWrite(fw, LOW);
    digitalWrite(s, 0);
    
  } else if (value <= 1450 && value >= 1030) {
    int y = map(p, 1450, 1030, 0, 255);
    digitalWrite(fw, LOW);
    digitalWrite(bw, HIGH); 
    analogWrite(s, y);
    
  }

 
}
