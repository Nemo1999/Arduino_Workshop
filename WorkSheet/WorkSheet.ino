

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
      digitalWrite(led_red, 1);
      delay(500);

  */

  // ==========Analog LED 測試 =============
  /*
     analogWrite(led_red, 50);
     delay(500);
     analogWrite(led_red, 255);
     delay(500);

  */


  // ========== 漸層 ========
  /*
    //漸層的階層數目
    int nStep = 100;

    // 每個顏色的最高值與最低值
    int rH = 50, rL = 255;

    //每個階層平均要改變多少？
    float rStep = float(rH - rL)/ nStep;

    // 紅色亮起
    for(int i=0;i<=nStep;i++){
      analogWrite(led_red, rL + rStep * i);
      delay(30);
    }
    delay(200);
    // 紅色淡去
    for(int i=0;i<=nStep;i++){
      analogWrite(led_red, rL + rStep * (nStep-i));
      delay(30);
    }
    delay(200);

  */


  //============光敏電阻============
  /*
    int light_sensor = analogRead(light);
    Serial.println(light_sensor);

  */


  //============  喇叭 ============
  /*
    tone(speaker, 1000);
    delay(500);
    noTone(speaker);
    delay(500);
  */



  //===========光敏電阻 ＋ 喇叭 =========
  /*
    int low = 0;
    int high = 60;
    int light_sensor = analogRead(light);
    float freq = exp(4 *float(high - light_sensor)/float(high - low)) * 100 + 100;
    Serial.println(freq);
    tone(speaker, freq);
    delay(50);
  */
}
