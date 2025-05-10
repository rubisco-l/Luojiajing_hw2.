#include <Arduino.h>
int LED1=17;
int LED2=5;
int flag1=0;
int flag2=0;

void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

}

void loop() {
  char c;
  if(Serial.available()>0){
    c =Serial.read();
  }
  if(c=='1'){
    if(flag1==0){
    digitalWrite(LED1,HIGH);
    Serial.println("LED1 on");
    flag1=1;
  }
    else{
      digitalWrite(LED1,LOW);
      Serial.println("LED1 off");
      flag1=0;
    }
  }
  else if(c=='2'){
    if(flag2==0){
      digitalWrite(LED2,HIGH);
      Serial.println("LED2 on");
      flag2=1;
    }
      else{
        digitalWrite(LED2,LOW);
        Serial.println("LED2 off");
        flag2=0;
      }
  }
}

