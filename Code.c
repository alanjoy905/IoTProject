int sensorPin = A0; 
int sensorValue;  
int limit = 31; 
int yellow =50;
int green = 80;
float moisture_percentage=0;
void setup() 
{
 Serial.begin(9600);
 pinMode(5, OUTPUT);
 pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
 {

 sensorValue = analogRead(sensorPin); 
  moisture_percentage = ( 100 - ( (sensorValue/1023.00) * 100 ) );
 Serial.println("Analog Value : ");
 Serial.println(moisture_percentage);
 
 if (moisture_percentage<limit)
 {
 digitalWrite(5, HIGH); 

 }
 else{
   digitalWrite(5, LOW); 
  }
 if(moisture_percentage > green)
{
   digitalWrite(7,HIGH);
  }
 if(moisture_percentage >= 31 && moisture_percentage <=79)
{
 digitalWrite(6, HIGH); 

 }
  else
{
   digitalWrite(6, LOW); 
  }
 
 delay(700); 
}
