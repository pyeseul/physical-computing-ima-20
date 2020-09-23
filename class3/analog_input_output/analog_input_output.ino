/* This code reads analog values from a potentiometer connected to A0, 
 * prints it out to the serial monitor, and change the brightness of an LED connected to Pin9.
 */

const int sensorPin = A0;
const int ledPin = 9;  
  
int sensorValue = 0;
int sensorValue_mapped = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {  
  sensorValue = analogRead(sensorPin);
  sensorValue_mapped = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(ledPin,sensorValue_mapped);

  Serial.print(sensorValue);
  Serial.print(" , ");
  Serial.println(sensorValue_mapped);
  
  delay(20);
}
