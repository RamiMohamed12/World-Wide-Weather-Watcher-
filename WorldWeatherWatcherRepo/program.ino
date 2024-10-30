void setup() {
  // Begin serial communication at 9600 bits per second
  Serial.begin(9600);

  // Calculate 1 + 1
  int result = 1 + 1;

  // Print the result to the Serial Monitor
  Serial.print("1 + 1 = ");
  Serial.println(result);
}

void loop() {
  // Nothing to do here
}
