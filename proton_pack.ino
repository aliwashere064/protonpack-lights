// Pins for the four LEDs
#define LED_1 13  // GPIO13 (D13)
#define LED_2 12  // GPIO12 (D12)
#define LED_3 14  // GPIO14 (D14)
#define LED_4 27  // GPIO27 (D27) - New LED pin

// Time each LED stays on (in milliseconds)
#define DELAY_TIME 150

void setup() {
  // Set each LED pin as output
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);  // Set the new pin D27 as output
}

void loop() {
  // Light up LEDs one by one in a loop
  digitalWrite(LED_1, HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED_1, LOW);

  digitalWrite(LED_2, HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED_2, LOW);

  digitalWrite(LED_3, HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED_3, LOW);

  digitalWrite(LED_4, HIGH);  // Light up the new LED
  delay(DELAY_TIME);
  digitalWrite(LED_4, LOW);  // Turn it off
}

