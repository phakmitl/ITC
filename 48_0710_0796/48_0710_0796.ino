unsigned long time;

void setup() {
}
void loop() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, HIGH);
  delay(250);
  
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  delay(250);
  
////////////////////////////////////////  
  pinMode(13, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(9, OUTPUT);
  digitalWrite(9, HIGH);
  delay(250);
  
  pinMode(13, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  delay(250);

/////////////////////////////////////////
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(9, INPUT);
  delay(250);

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  pinMode(9, INPUT);
  delay(250);
////////////////////////////////////////////
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  pinMode(9, INPUT);
  delay(250);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(9, INPUT);
  delay(250);
/////////////////////////////////////////
  pinMode(13, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  delay(250);
  
  pinMode(13, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  pinMode(9, OUTPUT);
  digitalWrite(9, HIGH);
  delay(250);
/////////////////////////////////////////////

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
  delay(250);
  
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, HIGH);
  delay(250);
  
}
