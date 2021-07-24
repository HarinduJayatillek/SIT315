// C++ code
//

int yLed = 12;
int rLed = 13;
int pir = 2;

void setup()
{
  pinMode(rLed, OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int val = digitalRead(pir);
  //Serial.println(val);
  //delay(3000);
  
  if(val == HIGH){

    digitalWrite(yLed, HIGH);
    delay(1000);
    digitalWrite(yLed, LOW);
    delay(1000);
    Serial.println("Motion Detected and Yellow Led blinks");
  
  }
  else{
    
    digitalWrite(rLed, HIGH);
    Serial.println("Red Led On");
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(rLed, LOW);
    Serial.println("Red Led Off");
    delay(1000); // Wait for 1000 millisecond(s)
  
  }
}
