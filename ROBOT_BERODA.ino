int dataku=0;
int dataku1=0;

void setup() {
 Serial.begin(9600);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);

 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(12,HIGH);
}

void loop() {
if(Serial.available() > 0){
      dataku = Serial.read();
      if (dataku=='A') {
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
      }

       if (dataku=='B') {
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
      }
      
      if (dataku=='C') {
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
      }
      
      if (dataku=='D') {
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
      }    
        
      if (dataku=='E') {
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
      }
    }
}
