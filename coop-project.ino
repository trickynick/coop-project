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

void loop()
{

  int reading = analogRead(tempPin);


  float voltage = reading * 5.0;
  voltage /= 1024.0;


  Serial.print(voltage); Serial.println(" volts");

  float temperatureC = (voltage - 0.5) * 100 ;

  Serial.print(temperatureC); Serial.println(" degrees C");


  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF); Serial.println(" degrees F");
  Serial.print(motionTime);
  delay(1000);
}
