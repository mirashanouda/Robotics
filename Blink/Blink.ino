#define right 5
#define center 6
#define left 7

#define red    1
#define yellow 2
#define green  3


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  delay(500);                       // wait for a second
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(500);                       // wait for a second
}
