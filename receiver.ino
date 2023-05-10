#include <Ethernet.h>

// MAC address of receiver Arduino
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xEE };
// IP address of receiver Arduino
IPAddress ip(192, 168, 1, 178);
// Listen port
unsigned int port = 12345;

// Initialize Ethernet server
EthernetServer server(port);

void setup() {
  // Start serial communication
  Serial.begin(9600);
  // Start Ethernet
  Ethernet.begin(mac, ip);
  // Start server
  server.begin();
  // Wait for Ethernet to initialize
  delay(1000);
}

void loop() {
  // Check if there's a client connected
  EthernetClient client = server.available();
  if (client) {
    // Read data from client
    while (client.connected()) {
      if (client.available()) {
        Serial.println(client.readStringUntil('\n'));
      }
    }
    // Disconnect client
    client.stop();
  }
}