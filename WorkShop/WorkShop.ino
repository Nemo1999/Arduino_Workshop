
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
} 

void loop() {
  // put your main code here, to run repeatedly:


  // LED　TEST
  digitalWrite(led_red, 1);
  delay(500);
  digitalWrite(led_red, 0);
  delay(500);
  digitalWrite(led_blue, 1);
  delay(500);
  digitalWrite(led_blue, 0);
  delay(500);
  digitalWrite(led_green, 1);
  delay(500);
  digitalWrite(led_green, 0);
  delay(500);
}
