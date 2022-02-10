#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // ポテンショメータ用ピン
//int val;    // アナログピンからの値

//const int led = 48;       // LED点灯確認用
const int digitalPin = 52; // センサ D0出力接続先
const int analogPin = A0; // センサ A0出力接続先

void setup() {
//  pinMode(led, OUTPUT); 
  pinMode(digitalPin, INPUT); 
  myservo.attach(50);
  Serial.begin(9600);
}

void loop() {
  int d_val;    // digital用変数
  float a_val;  //analog用変数
  
  // D0出力の制御
  d_val = digitalRead(digitalPin); 
//  d_val = map(d_val, 0, 1023, 0, 180);
  if(d_val == HIGH){         // D0出力がHIGH
    myservo.write(30);
    delay(50);
    myservo.write(-30);
  }
  else if(d_val == LOW){     // D0出力がLOW
    
  }
//  delay(50);

}
