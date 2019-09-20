int trigPin1=13;
int echoPin1=12;

int trigPin2=11;
int echoPin2=10;

int trigPin3=9;
int echoPin3=8;

int trigPin4=7;
int echoPin4=6;

int trigPin5=5;
int echoPin5=4;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
   pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
   pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
   pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
   pinMode(trigPin5, OUTPUT);
  pinMode(echoPin5, INPUT);

}

void loop() {
  long duration1, distance1;
  digitalWrite(trigPin1, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;

   if (distance1 >= 500 || distance1 <= 0){
   
  }
  else {
    
  }
 
  
  long duration2, distance2;
  digitalWrite(trigPin2, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2/2) / 29.1;
  
  
  long duration3, distance3;
  digitalWrite(trigPin3, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3= (duration3/2) / 29.1;
        
    
  
  
  
  long duration4, distance4;
  digitalWrite(trigPin4, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin4, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  distance4= (duration4/2) / 29.1;

   if (distance4 >= 500 || distance4 <= 0){
    

  }
  else {
    
    
    
  }


  
  long duration5, distance5;
  digitalWrite(trigPin5, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin5, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin5, LOW);
  duration5 = pulseIn(echoPin5, HIGH);
  distance5= (duration5/2) / 29.1;
int tom2 = distance2 - distance3;
int tom3 = distance3 - distance4;
int tom4 = distance4 - distance2;

  if (distance2 != distance3 && distance3 == distance4 && tom2>1 ){
    Serial.println(tom2);
   
}else if (distance3 != distance4 && distance2 == distance4 && tom2>1){
    Serial.println(tom3);
  }else if (distance4 != distance2 && distance2 == distance3 && tom2>1){
     Serial.println(tom4);
  }else {
    Serial.println(0);
  }

}
