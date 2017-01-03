#define pwm 11
int i = 0;



void setup()
{
  Serial.begin(9600);
  pinMode(pwm , OUTPUT);
}

void loop()
{
  for(i = 0; i < 255 ; i +=1)
  {
    analogWrite(pwm,i);
    Serial.println(i);
    delay(100);
  }
Serial.println(i);

}

