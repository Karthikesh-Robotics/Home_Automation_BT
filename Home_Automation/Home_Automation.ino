// Created by Karthikesh Robotics
// Youtube channel : https://www.youtube.com/c/KarthiKeshRobotics
 
#define light1 6
#define light2 7
#define fan1 8
#define fan2 9

void setup() {
  Serial.begin(9600);
  pinMode(light1,OUTPUT);
  pinMode(light2,OUTPUT);
  pinMode(fan1,OUTPUT);
  pinMode(fan2,OUTPUT);
  
}

void loop() {
  if(Serial.available()>0)
  {
    char command=Serial.read();
    switch(command)
    {
      case 'a' :digitalWrite(light1,HIGH);
      break;
      case 'b' :digitalWrite(light1,LOW);
      break;
      case 'c' :digitalWrite(light2,HIGH);
      break;
      case 'd' :digitalWrite(light2,LOW);
      break;
      case 'e' :digitalWrite(fan1,HIGH);
      break;
      case 'f' :digitalWrite(fan1,LOW);
      break;
      case 'g' :digitalWrite(fan2,HIGH);
      break;
      case 'h' :digitalWrite(fan2,LOW);
      break;
      }
      Serial.println(command);
    }
  

}
// Created by Karthikesh Robotics
// Youtube channel : https://www.youtube.com/c/KarthiKeshRobotics
