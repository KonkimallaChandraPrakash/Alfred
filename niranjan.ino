int pin1 =8;
int pin2 =9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0 )
  {
    int c1=Serial.read();
    if(c1 == 'a')
    {
      digitalWrite(pin1,HIGH);
      //digitalWrite(pin2,HIGH);
    }
    if(c1 == 'b')
    {
      digitalWrite(pin2,HIGH);
    }
    if(c1 == 'c' )
    {
      digitalWrite(pin1,LOW);
    }
    if(c1 == 'd')
    {
      digitalWrite(pin2,LOW);
    }
  }

}
