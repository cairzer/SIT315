void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  int flagSense = digitalRead(2);
  Serial.println(flagSense);
  digitalWrite (LED_BUILTIN,flagSense);
  delay(1000); // Wait for 1000 millisecond(s)
  
}