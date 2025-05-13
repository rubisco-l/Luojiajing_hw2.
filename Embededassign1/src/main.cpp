#include <Arduino.h>
int a[6]={15,2,4,16,17,5};

const int ledPin = 2;  // 板载蓝色 LED 一般连接到 GPIO2

void setup() {
for(int i = 0; i <=5; i++)
pinMode(a[i],OUTPUT);
}
 
void loop() {
  //来回for循环，设置好起止点
for(int i = 0; i <= 5; i++ )
  {
    digitalWrite(a[i] , HIGH);
    delay(500);
    digitalWrite(a[i] , LOW);
  }
  for(int i = 5;i >=0;i--)
  {
    digitalWrite(a[i] , HIGH);
    delay(500);
    digitalWrite(a[i] , LOW);
    }
}

