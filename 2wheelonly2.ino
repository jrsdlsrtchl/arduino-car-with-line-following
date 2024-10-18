// Arduino Remote Control Car

//MOTOR 1
int motor1Pin1 = 11; 
int motor1Pin2 = 10; 
int enable1Pin = 3;

//MOTOR 2
int motor2Pin1 = 9;
int motor2Pin2 = 8;
int enable2Pin = 2;  

void setup() {
    
    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(enable1Pin, OUTPUT);

    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);
    pinMode(enable2Pin, OUTPUT);
  
  
    digitalWrite(enable1Pin, HIGH);
    digitalWrite(enable2Pin, HIGH);
    
    
    Serial.begin(9600);
    Serial.println("WELCOME TO OUR 2 WHEEL DRIVE CART SIMULATION");
    Serial.println("PRESS ( W ) TO FORWARD");
    Serial.println("PRESS ( S ) TO REVERSE");
    Serial.println("PRESS ( D ) TO TURN RIGHT");
    Serial.println("PRESS ( A ) TO TURN LEFT");
    Serial.println("PRESS ( E ) TO TURN HARD RIGHT");
    Serial.println("PRESS ( Q ) TO TURN HARD LEFT");
    Serial.println("PRESS ( X ) TO STOP");
    Serial.println(" ");  

}

void loop() {
  
    if(Serial.available() > 0){     
    
        char control = Serial.read();   
       

    // forward
    if (control == 'W' || control == 'w') {
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);

        Serial.println("GO FORWARD!");

    }
      

    // right
    if (control == 'D' || control == 'd') {
        digitalWrite(motor1Pin1, LOW);
        digitalWrite(motor1Pin2, HIGH); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);

          Serial.println("RIGHT TURN!");

    }
   

    // hard right
    if (control == 'E' || control == 'e') {
        digitalWrite(motor1Pin1, LOW);
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);
        
          Serial.println("HARD RIGHT TURN!");
    }

    // hard right 2
    if (control == 'C' || control == 'c') {
        digitalWrite(motor1Pin1, LOW);
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);
        
          Serial.println("HARD RIGHT TURN!");
    }


    // left
    if (control == 'A' || control == 'a') {
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
  
          Serial.println("LEFT TURN!");
    }
   
    // hard left
    if (control == 'Q' || control == 'q') {
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, LOW);
        
          Serial.println("SHARP LEFT TURN!");
    }

    // hard left 2
    if (control == 'Z' || control == 'z') {
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, LOW);
        
          Serial.println("SHARP LEFT TURN!");
    }

    // stop
    else if (control == 'X' || control == 'x') {
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, LOW);

          Serial.println("STOP!");
    }
   
    // reverse
    else if (control == 'S' || control == 's') {
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, HIGH);
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);

          Serial.println("REVERSE!");
    }
  }  
}
