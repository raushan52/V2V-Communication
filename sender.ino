#include <Ethernet.h>

// MAC address of sender Arduino
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
// IP address of sender Arduino
IPAddress ip(192, 168, 1, 177);
// Destination IP address
IPAddress dest(192, 168, 1, 178);
// Destination port
unsigned int port = 12345;

// Initialize Ethernet client
EthernetClient client;

void setup() {
  // Start serial communication
  Serial.begin(9600);
  // Start Ethernet
  Ethernet.begin(mac, ip);
  // Wait for Ethernet to initialize
  delay(1000);
}

void loop() {
  // Send data to receiver Arduino
  if (client.connect(dest, port)) {
    client.println("Hello, receiver!");
    client.stop();
  }
  // Wait for some time before sending again
  delay(1000);
}