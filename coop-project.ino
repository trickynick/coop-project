//TMP36 Pin Variables
int tempPin = A0; //temp sensor
int timePin = A2; //pot pin to adjust time since
int lightPin = A1; //light sensor
int closePin = 2;  //close relay
int openPin = 4;   // open relay




void setup()
{
  pinMode(tempPin, INPUT);
  pinMode(timePin, INPUT);
  pinMode(lightPin, INPUT);
  pinMode(closePin, OUTPUT);
  pinMode(openPin, OUTPUT);
  Serial.begin(9600);
}

unsigned long motionTime; //Start the clock

// POSSIBLE STATES
enum STATE_T {
  STATE_OPEN,
  STATE_WAITING,
  STATE_CLOSED
};


int state = STATE_OPEN; // which state do we start in???
int nextState; // don't initialize


void loop()
{
  
  nextState = state;
  switch(state)
  {
    case STATE_OPEN:
      Serial.println("OPEN");
      break;
    case STATE_WAITING:
      Serial.println("WAITING");
      break;
    case STATE_CLOSED:
      Serial.println("CLOSED");
      break;
    default:
      Serial.println("SOMETHING WRONG");
      break;
  }
  
  state = nextState;
  
  delay(500);

  
  
  
  
  
  

//  int reading = analogRead(tempPin);
//
//
//  float voltage = reading * 5.0;
//  voltage /= 1024.0;
//
//
//  Serial.print(voltage); Serial.println(" volts");
//
//  float temperatureC = (voltage - 0.5) * 100 ;
//
//  Serial.print(temperatureC); Serial.println(" degrees C");
//
//
//  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
//  Serial.print(temperatureF); Serial.println(" degrees F");
//  Serial.println(motionTime);
//  delay(1000);
//  
//  float lightValue = analogRead(lightPin);
//  Serial.print(lightValue); Serial.println(" units of photo-sensor");
//  
//  if (lightValue < 200)
//  {
//     // if PIR senses motion, save time
//     motionTime = millis();     
//     Serial.println("UPDARING");
//  }  
  
}
