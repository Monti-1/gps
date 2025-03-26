#include <SoftwareSerial.h>

#define RXPin 10
#define TXPin 11
#define GPSBaud 9600

SoftwareSerial gpsSerial(RXPin, TXPin);

void setup() {
  Serial.begin(115200);
  gpsSerial.begin(GPSBaud);
  Serial.println("GPS Module Test");
}

void loop() {
  while (gpsSerial.available()) {
    Serial.write(gpsSerial.read());  // Print raw GPS data
  }
}
