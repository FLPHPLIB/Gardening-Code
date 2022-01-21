/* 4-channel plant watering System - Version 1.0
   This system will measure the moisture content
   of the soil for 4 individual plants and water
   them as needed.

   Modified by: Philippe H. Petot - 010722

   Research moisture level for the various plants 1-4 for best performance

   Future upgrades: 1. Add LCD screen for visual readings
                    2. Add LED indicators for each plant
                    3. Add Water level indicator for water supply
*/

// Variable assignment
int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

//Pin assignment
int Pin1 = A0; 
int Pin2 = A1;
int Pin3 = A2;
int Pin4 = A3;

//Starting Values
float value1 = 0;
float value2 = 0;
float value3 = 0;
float value4 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(Pin1, INPUT);
  pinMode(Pin2, INPUT);
  pinMode(Pin3, INPUT);
  pinMode(Pin4, INPUT);
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(500);
}
void loop() {

  Serial.print("Moisture Level-Plant1:");  //Plant 1
  value1 = analogRead(Pin1);
  Serial.println(value1);
  if(value1>750)                    //Initial threshold level set to 750
  {
      digitalWrite(IN1, LOW);
  }
  else
  {
    digitalWrite(IN1, HIGH);
    }
    
  Serial.print("Moisture Level-Plant2:");  //Plant 2
  value2 = analogRead(Pin2);
  Serial.println(value2);
  if(value2>750)
  {
      digitalWrite(IN2, LOW);
  }
  else
  {
    digitalWrite(IN2, HIGH);
    }

  Serial.print("Moisture Level-Plant3:");  //Plant 3
  value3 = analogRead(Pin3);
  Serial.println(value3);
  if(value3>750)
  {
      digitalWrite(IN3, LOW);
  }
  else
  {
    digitalWrite(IN3, HIGH);
    }

  Serial.print("Moisture Level-Plant4:");  //Plant 4
  value4 = analogRead(Pin4);
  Serial.println(value4);
  if(value4>750)
  {
      digitalWrite(IN4, LOW);
  }
  else
  {
    digitalWrite(IN4, HIGH);
    }
    Serial.println();
  delay(1000);
}
