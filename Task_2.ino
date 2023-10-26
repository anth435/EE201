void setup() {
Serial.begin(9600);
pinMode(7, INPUT);

}

void loop() {

  if(digitalRead(7) == HIGH){
    Serial.println("Hello World");
    delay(1000);
  } else {
    Serial.println("It's 2023!");
    delay(1000);
  }

}
