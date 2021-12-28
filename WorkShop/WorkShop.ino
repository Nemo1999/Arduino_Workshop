
int led_green = 3; // LED綠色的腳接在nano板子D3腳位
int led_red = 5;   // LED紅色的腳接在nano板子D5腳位
int led_blue = 6;  // LED藍色的腳接在nano板子D6腳位
int speaker = 9;   // 喇叭接在D9腳位
int light = A0;    // 光敏電阻接在A0腳位

void setup() {
  // put your setup code here, to run once:
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(speaker, OUTPUT);
  pinMode(light, INPUT);

  //關燈
  digitalWrite(led_red, 1);
  digitalWrite(led_blue, 1);
  digitalWrite(led_green, 1);

  //開始與電腦傳輸訊息 （只有需要傳送訊息的時候會用到）
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // ==========Digital LED 測試 ============
  /*
      digitalWrite(led_red, 0);
      delay(500);
      dititalWrite(led_red, 1);
      delay(500);

      digitalWrite(led_blue, 0);
      delay(500);
      digitalWrite(led_blue, 1);
      delay(500);

      digitalWrite(led_green, 0);
      delay(500);
      digitalWrite(led_green, 1);
      delay(500);
  */
  // ==========Analog LED 測試 =============
  /*
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


  // ========== 漸層 ========
  /*


    //漸層的階層數目
    int nStep = 100;

    // 每個顏色的最高值與最低值

    int rH = 50, rL = 255;
    int bH = 50, bL = 255;
    int gH = 200, gL = 255;


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


  //============光敏電阻============
  /*
    int rH = 50, rL = 255;
    int bH = 50, bL = 255;
    int gH = 200, gL = 255;

    int lLow = 20;
    int lHigh = 150;
    int l = analogRead(light);

    float ratio = max(0, min(0.99, float(l - lLow) / float(lHigh - lLow)));

    Serial.println(ratio);

    analogWrite(led_blue, bL + (bH - bL)* (1-ratio));
    analogWrite(led_red, rL + (rH - rL)* (ratio));
    if(ratio < 0.7)
      tone(speaker, 1000 * (1 - ratio));
    else
      noTone(speaker);
  */
}
