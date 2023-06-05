const int sensorPin = A0;  // Analog input pin for the sensor

void setup() {

  pinMode(sensorPin, INPUT);  // Set the sensor pin as an input

}


void loop() {
  int sensorValue = analogRead(sensorPin);  // Read the sensor value
  
  // Publish the moisture level as an event
  Particle.publish("moisture", String(sensorValue), PRIVATE);

  delay(30000); 
}
