void setup() {
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(2, OUTPUT);
pinMode(12, OUTPUT);


}

void loop() {
//9
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);

  delay(1500);

//8
  digitalWrite(12, LOW);

  delay(1500);
//7
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);

  delay(1500);
//6
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);

  delay(1500);
//5
  digitalWrite(5, LOW);
  digitalWrite(12, HIGH);

  delay(1500);

//4

  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);

  delay(1500);
//3
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(12, HIGH);

  delay(1500);
//2
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);

  delay(1500);
//1
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);

  delay(1500);
//0
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);

  delay(1500);
 



}
