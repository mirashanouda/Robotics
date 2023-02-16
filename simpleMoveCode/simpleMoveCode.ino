int DIR_LEFT = 8;
int DIR_RIGHT = 9;
int PWM_LEFT = 10;
int PWM_RIGHT = 11;
//---------------------------------------------
void setup() {
pinMode(DIR_LEFT,OUTPUT);   //Dir RIGHT
pinMode(DIR_RIGHT,OUTPUT);   // Dir LEFT
pinMode(PWM_LEFT,OUTPUT);  //PWM LEFT
pinMode(PWM_RIGHT,OUTPUT);  //PWM RIGHT

}
//---------------------------------------------
void loop() {

move_stop();
delay(5000);
move_forward();
delay(5000);
}
//---------------------------------------------
void move_forward(){
  digitalWrite(DIR_LEFT,HIGH);
  digitalWrite(DIR_RIGHT,HIGH);
  analogWrite(PWM_LEFT,255);
  analogWrite(PWM_RIGHT,255);
}
void move_back(){
  digitalWrite(DIR_LEFT,LOW);
  digitalWrite(DIR_RIGHT,LOW);
  analogWrite(PWM_LEFT,255);
  analogWrite(PWM_RIGHT,255);
}
void move_left(){
  digitalWrite(DIR_LEFT,LOW);
  digitalWrite(DIR_RIGHT,HIGH);
  analogWrite(PWM_LEFT,50);
  analogWrite(PWM_RIGHT,150);
}
void move_right(){
  digitalWrite(DIR_LEFT,HIGH);
  digitalWrite(DIR_RIGHT,LOW);
  analogWrite(PWM_LEFT,150);
  analogWrite(PWM_RIGHT,50);
}
void move_stop(){
  digitalWrite(DIR_LEFT,LOW);
  digitalWrite(DIR_RIGHT,LOW);
  analogWrite(PWM_LEFT,0);
  analogWrite(PWM_RIGHT,0);
}
