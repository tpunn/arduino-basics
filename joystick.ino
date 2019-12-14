void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(10, INPUT);
}

int makePrecise(long value, int maximum) {
  return round((maximum-value)/2)*2;
}

void loop() {
  long x = analogRead(A2), y = analogRead(A1);
  // $123,-56
  Serial.print("$");
  Serial.print(makePrecise(x,490));
  Serial.print(",");
  Serial.print(makePrecise(y,502));
  Serial.print("\n");
}
