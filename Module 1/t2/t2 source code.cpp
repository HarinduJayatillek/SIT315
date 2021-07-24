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
  
  attachInterrupt(0, interruptChange, CHANGE);
}

void interruptChange()
{
  int val = digitalRead(pir);
    
  if(val == HIGH){
    
    for(int i=0; i<=5;){    
      digitalWrite(yLed, HIGH);
      delay(5000);
      digitalWrite(yLed, LOW);
      delay(5000);
      i++;
      delay(5000);      
    }
    Serial.println("Motion Detected and Green Led Blinks");
  }
}

void loop()
{
  digitalWrite(rLed, HIGH);
  Serial.println("Red Led On");
  delay(1000);
  digitalWrite(rLed, LOW);
  Serial.println("Red Led Off");
  delay(1000); 
}