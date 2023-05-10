// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by Arbi Abdul Jabbaar
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //

#define echoPinFirstFront 3 // attach pin D2 Arduino to pin Echo of HC-SR04
#define echoPinFirstRight 5
#define echoPinFirstLeft 7
#define echoPinFirstRear 9


#define trigPinFirstFront 2 //attach pin D3 Arduino to pin Trig of HC-SR04
#define trigPinFirstRight 4
#define trigPinFirstLeft 6
#define trigPinFirstRear 8



// defines variables
long durationFront; // variable for the duration of sound wave travel
long durationRight;
long durationLeft;
long durationRear;


int distanceFront; // variable for the distance measurement
int distanceRight;
int distanceLeft;
int distanceRear;

//void distanceFront(int tt,int ee);

void setup() {
  pinMode(trigPinFirstFront, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(trigPinFirstRight, OUTPUT);
  pinMode(trigPinFirstLeft, OUTPUT);
  pinMode(trigPinFirstRear, OUTPUT);

  
  pinMode(echoPinFirstFront, INPUT); // Sets the echoPin as an INPUT
  pinMode(echoPinFirstRight, INPUT);
  pinMode(echoPinFirstLeft, INPUT);
  pinMode(echoPinFirstRear, INPUT);
  
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}
void loop() {
 
        
  digitalWrite(trigPinFirstFront, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinFirstFront, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinFirstFront, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  durationFront = pulseIn(echoPinFirstFront, HIGH);
  // Calculating the distance
  distanceFront = durationFront * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  if( distanceFront > 10)
  {
  Serial.print("Distance Front: ");
  Serial.print(distanceFront);
  Serial.println(" cm");

  }
  


  digitalWrite(trigPinFirstRight, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinFirstRight, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinFirstRight, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  durationRight = pulseIn(echoPinFirstRight, HIGH);
  // Calculating the distance
  distanceRight = durationRight * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  if(distanceRight > 10)
  {
    Serial.print("Distance Right: ");
    Serial.print(distanceRight);
    Serial.println(" cm");

  }
  


  digitalWrite(trigPinFirstLeft, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinFirstLeft, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinFirstLeft, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  durationLeft = pulseIn(echoPinFirstLeft, HIGH);
  // Calculating the distance
  distanceLeft = durationLeft * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor

  if( distanceLeft > 10)
  {
     Serial.print("Distance Left: ");
      Serial.print(distanceLeft);
      Serial.println(" cm");
  }
 


   digitalWrite(trigPinFirstRear, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinFirstRear, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinFirstRear, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  durationRear = pulseIn(echoPinFirstRear, HIGH);
  // Calculating the distance
  distanceRear = durationRear * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor

  if(distanceRear > 10)
  {
    Serial.print("Distance Rear: ");
    Serial.print(distanceRear);
    Serial.println(" cm");
  }
  

//    distanceFront(trigPinFirstFront,echoPinFirstFront);
//    distanceFront(trigPinFirstRight,echoPinFirstRight);
//    distanceFront(trigPinFirstLeft,echoPinFirstLeft);
//    distanceFront(trigPinFirstRear,echoPinFirstRear);
//    
    
//  // Clears the trigPin condition
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);
//  // Reads the echoPin, returns the sound wave travel time in microseconds
//  duration = pulseIn(echoPin, HIGH);
//  // Calculating the distance
//  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
//  // Displays the distance on the Serial Monitor
//  Serial.print("Distance: ");
//  Serial.print(distance);
//  Serial.println(" cm");
}
//
// void distanceFront(int tt,int ee){
//    int trig = tt;
//    int echo = ee;
//    digitalWrite(tt, LOW);
//  delayMicroseconds(2);
//  
//  digitalWrite(tt, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(tt, LOW);
//  
//  duration = pulseIn(ee, HIGH);
//  
//  distance = duration * 0.034 / 2; 
//  Serial.print("Distance: ");
//  Serial.print(distance);
//  Serial.println(" cm");
//    
//    }