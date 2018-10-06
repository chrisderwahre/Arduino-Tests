void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Starting to initialize the pins...\n");
  pinMode(12, OUTPUT); // Idk probably initialize Pin
  Serial.print("Pin 12 initialized.\n");
  pinMode(9, OUTPUT); // Idk probably initialize Pin
  Serial.print("Pin 9 initialized.\n");
  pinMode(6, OUTPUT); // Idk probably initialize Pin
  Serial.print("Pin 6 initialized.\n");
  pinMode(3, OUTPUT); // Idk probably initialize Pin
  Serial.print("Pin 3 initialized.\n");
}

int loopCount = 0;

void loop() {
  // put your main code here, to run repeatedly::
  Serial.print("\nStarting new loop!\nThis is loop number: ");
  Serial.print(loopCount);
  loopCount++;
  digitalWrite(12, HIGH); // Turn LED Red On
  delay(500); // Wait a half second
  digitalWrite(9, HIGH); // Turn LED Yellow On
  delay(500); // Wait a half second
  digitalWrite(6, HIGH); // Turn LED White On
  delay(500); // Wait a half second
  digitalWrite(3, HIGH); // Turn LED Blue On
  delay(1000); // Wait a second                     
  digitalWrite(12, LOW); // Turn LED Red Off 
  delay(500); // Wait a half second
  digitalWrite(9, LOW); // Turn LED Yellow Off 
  delay(500); // Wait a half second
  digitalWrite(6, LOW); // Turn LED White Off 
  delay(500); // Wait a half second
  digitalWrite(3, LOW); // Turn LED Blue Off 
  delay(1000); // Wait a second
}
