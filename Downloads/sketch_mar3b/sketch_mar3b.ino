int btn = 4; led = 11;


void setup() {

 pinMode(4,IMPUT)
 pinMode(led, OUTPUT)

}

void loop() {
 if(digitalRead(btn) == HIGH){
  digitalWrite(led,HIGH);
 }else{
  digitalWrite(led,LOW);
 }

 delay(10);
}