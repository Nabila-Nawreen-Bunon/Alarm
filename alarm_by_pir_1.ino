// Define the pin for the PIR sensor and the alarm
const int pirPin = 7;
const int alarmPin = 13;

void setup() {
  pinMode(pirPin,INPUT);
  pinMode(alarmPin,OUTPUT);
  Serial.begin(9600);
}
  
void loop() {
 int pirValue=digitalRead(pirPin);
  if(pirValue==HIGH){
    digitalWrite(alarmPin,HIGH);
    Serial.println("Motion detected");
  }else{
    digitalWrite(alarmPin,LOW);
    Serial.println("No Motion.");
  }
  delay(100);
}