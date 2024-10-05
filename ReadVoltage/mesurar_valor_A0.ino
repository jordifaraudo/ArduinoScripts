
float mV = 0.0;
unsigned int Vinput = 0;


void setup() {
 Serial.begin(9600);
  // put your setup code here, to run once:
 analogReference(INTERNAL);
}

void loop() {
  // put your main code here, to run repeatedly:
 Vinput = analogRead(A0);
 mV = (Vinput/1023.0)*1100;
 //Serial.print("mV =");
 //Serial.println(mV);
 Serial.println(Vinput);
}
