// C++ code
int time;
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  time = 500;
}
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(time); // Wait for 500 millisecond(s)
  //  
  digitalWrite(12, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  delay(time); // Wait for 500 millisecond(s)
  //
  digitalWrite(11, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(11, LOW);
  delay(time); // Wait for 500 millisecond(s)
  //
  digitalWrite(10, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(10, LOW);
  delay(time); // Wait for 500 millisecond(s)
  //
  digitalWrite(9, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(9, LOW);
  delay(time); // Wait for 500 millisecond(s)
  //
  digitalWrite(8, HIGH);
  delay(time); // Wait for 500 millisecond(s)
  digitalWrite(8, LOW);
  delay(time); // Wait for 500 millisecond(s)
}
