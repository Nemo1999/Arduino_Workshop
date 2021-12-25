
int led_green = 3;
int led_red = 5;
int led_blue = 6;
int speaker = 9;
int light = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(speaker, OUTPUT);
  pinMode(light, INPUT);

  analogWrite(led_red, 255);
  analogWrite(led_blue, 255);
  analogWrite(led_green, 255);
  randomSeed(analogRead(light));
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly:
/*    
// ========== LED 測試 =============

  analogWrite(led_red, 50);
  delay(500);
  analogWrite(led_red, 255);
  delay(500);
  
  analogWrite(led_blue, 50);
  delay(500);
  analogWrite(led_blue, 255);
  delay(500);
  
  analogWrite(led_green, 220);
  delay(500);
  analogWrite(led_green, 255);
  delay(500);
*/
/*
// ========== 漸層 ========


  //漸層的階層數目
  int nStep = 100;
  
  // 每個顏色的最高值與最低值
  
  int rH = 50, rL = 255;
  int bH = 50, bL = 255;
  int gH = 200, gL = 255;
  
  //每個階層平均要改變多少？
  float rStep = float(rH - rL)/ nStep;
  float gStep = float(gH - gL)/ nStep;
  float bStep = float(bH - bL)/ nStep;

  // 從綠色變成紅色  
  for(int i=0;i<=nStep;i++){      
      analogWrite(led_green, gL + gStep * (nStep-i));
      analogWrite(led_red, rL + rStep * i);
      //analogWrite(led_blue, bL + bStep * i);
      delay(30);
  }
  delay(200);
  //從紅色變成藍色
  for(int i=0;i<=nStep;i++){
      //analogWrite(led_green, gL + gStep * i);
      analogWrite(led_red, rL + rStep * (nStep-i));
      analogWrite(led_blue, bL + bStep * i);
      delay(30);
  }
  delay(200);
  //從藍色變回綠色
  for(int i=0;i<=nStep;i++){
      analogWrite(led_green, gL + gStep * i);
      //analogWrite(led_red, rL + rStep * i);
      analogWrite(led_blue, bL + bStep * (nStep-i));
      delay(30);
  }
  delay(200);
*/

/*
//===========大拼盤============
    int rH = 50, rL = 255;
    int bH = 50, bL = 255;
    int gH = 200, gL = 255;

    int lLow = 10;
    int lHigh = 70;
    int l = analogRead(light);
    
    float ratio = max(0, min(0.99, float(l - lLow) / float(lHigh - lLow)));
    
    Serial.println(ratio);
    
    analogWrite(led_blue, bL + (bH - bL)* (1-ratio));
    analogWrite(led_red, rL + (rH - rL)* (ratio));
    if(ratio < 0.7)
      tone(speaker,  exp(4.6 + 4*log(2)*(1 - ratio)));
    else
      noTone(speaker);
    delay(50);
*/    
}
