//Code that is uploaded to an Arduino UNO using Arduino IDE

int ledPin = 7;  

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
}

void loop() {
  if (Serial.available() > 0) {  // Check if data is available to read
    char receivedChar = Serial.read();  // Read the incoming byte
    if (receivedChar == 'H') {
      digitalWrite(ledPin, HIGH);  // Turn LED on
    } else if (receivedChar == 'L') {
      digitalWrite(ledPin, LOW);   // Turn LED off
    }
  }
}
