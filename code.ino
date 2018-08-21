
const int latchPin = 4;
const int clockPin = 3;
const int dataPin = 2;

int analogPin = 5;
int val = 0;  

void setup() {                
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);

  
  Serial.begin(9600);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 0);  
  digitalWrite(latchPin, HIGH);
}

void loop() {
  
  val = analogRead(analogPin);
  Serial.println(val);

  if( (val) > 90 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 255);  
    digitalWrite(latchPin, HIGH);
  }

  else if( (val) > 80 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 127);  
    digitalWrite(latchPin, HIGH);  
  }

    else if( (val) > 70 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 63);  
    digitalWrite(latchPin, HIGH);  
  }

    else if( (val) > 60 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 31);  
    digitalWrite(latchPin, HIGH);  
  }

    else if( (val) > 50 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 15);  
    digitalWrite(latchPin, HIGH);  
  }

    else if( (val) > 40 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 7);  
    digitalWrite(latchPin, HIGH);  
  }

    else if( (val) > 30 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 3);  
    digitalWrite(latchPin, HIGH);  
  }

  else if( (val) > 20 )
   {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 1);  
    digitalWrite(latchPin, HIGH);  
  }
  else if( (val) > 3 )
  {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, 0);  
    digitalWrite(latchPin, HIGH);  
  }
   delay(40);
    
 }


