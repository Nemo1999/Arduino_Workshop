








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
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly:
/*    
// ========== LED 測試 =============

  analogWrite(led_red, 255);
  delay(200);
  analogWrite(led_red, 50);
  delay(200);
  
*/

/*
// ========== 漸層 ========
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

/*
//============光敏電阻============
   int light_sensor = analogRead(light);
   Serial.println(light_sensor);

*/

/*
//============  喇叭 ============
  tone(speaker, 1000);
  delay(500);
  noTone(speaker);
  delay(500);
*/


/*
//===========光敏電阻 ＋ 喇叭 =========
  int low = 0;
  int high = 60;
  int light_sensor = analogRead(light);
  float freq = exp(4 *float(high - light_sensor)/float(high - low)) * 100 + 100;
  Serial.println(freq);
  tone(speaker, freq);
  delay(50);
*/
}
