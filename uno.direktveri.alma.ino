#include <SoftwareSerial.h>
static const int RXPin = 3, TXPin = 4;
static const uint32_t GPSBaud = 9600; // GPS baud hızınız 
SoftwareSerial ss(RXPin, TXPin);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // Serial monitor baud hızınız 115200, bu hızı serial ekranda seçmeyi unutmayın
  ss.begin(GPSBaud);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (ss.available()> 0){
   Serial.write(ss.read());
}
}
