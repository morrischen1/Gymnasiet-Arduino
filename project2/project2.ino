int switchState = 0;

void setup() {

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  //this is a comment
  if(switchState == LOW) {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
   
  else {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    
    delay(250); //vänta 0.25s
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(250);
    }

}
