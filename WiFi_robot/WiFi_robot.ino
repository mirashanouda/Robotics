#include <SPI.h>
#include <Ethernet.h>

// Ethernet settings
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192,168,1,177);
EthernetServer server(80);

// Pin settings
const int pin = 1;


int left_motor = 10;
int right_motor = 11;


void setup() {
  // start the Ethernet connection and the server:
  Ethernet.begin(mac, ip);
  server.begin();
  // Initialize the output pin
  pinMode(pin, OUTPUT);
  Serial.begin(9600);

  pinMode(left_motor, OUTPUT);
  pinMode(right_motor, OUTPUT);
    analogWrite(left_motor, 0);
  analogWrite(right_motor, 0);
}


void moveForward() {
  // digitalWrite(motor1_in1, HIGH);
  // digitalWrite(motor1_in2, LOW);
  // digitalWrite(motor2_in1, LOW);
  // digitalWrite(motor2_in2, HIGH);
  analogWrite(left_motor, 150);
  analogWrite(right_motor, 150);
}

void loop() {
    analogWrite(left_motor, 0);
  analogWrite(right_motor, 0);
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
      analogWrite(left_motor, 0);
  analogWrite(right_motor, 0);
    // read incoming data
    int incomingData = client.read();
    // set the pin value
    if (incomingData == '1') {
      moveForward();
     // digitalWrite(pin, HIGH);
      Serial.println("Signal for 'w' received");
    } else if (incomingData == '2') {
      
      //digitalWrite(pin, HIGH);
      Serial.println("Signal for 'a' received");
    } else if (incomingData == '3') {
      digitalWrite(pin, HIGH);
      Serial.println("Signal for 's' received");
    } else if (incomingData == '4') {
      digitalWrite(pin, HIGH);
      Serial.println("Signal for 'd' received");
    }
    else 
    {


    }
    
    }}
