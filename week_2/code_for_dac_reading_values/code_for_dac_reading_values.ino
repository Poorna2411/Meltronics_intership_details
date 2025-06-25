// Define the analog input pin
const int analogPin = A0;

void setup() {
  // Start serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the pin
  int analogValue = analogRead(analogPin);

  // Print the value to the Serial Monitor
  Serial.print("Analog Value from A0: ");
  Serial.println(analogValue);

  // Small delay for readability
  delay(500); // 500 milliseconds
}

