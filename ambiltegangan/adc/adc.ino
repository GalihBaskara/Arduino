#define sensor A7

int adc = 0;


void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReadResolution(12);
  pinMode(A7, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  adc = analogRead(A7);
  Serial.println(adc);
  delay(500);
}
