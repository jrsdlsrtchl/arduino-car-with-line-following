

int LDRV = A2; //analog pin to which LDR is connected, here we set it to 0 so it means A0
int LDR = A1; //analog pin to which LDR is connected, here we set it to 0 so it means A0
int LDRValue = 0; //that’s a variable to store LDR values
int LFRValue = 0;
int light_sensitivity = 40; //This is the approx value of light surrounding your LDR

//MOTOR 1
#define in1 11
#define in2 10
#define enA 3

//MOTOR 2
#define in3 9
#define in4 8
#define enB 2

 int M1_Speed = 80; // speed of motor 1
 int M2_Speed = 80; // speed of motor 2
 int LeftRotationSpeed = 250;  // Left Rotation Speed
 int RightRotationSpeed = 250; // Right Rotation Speed


 void setup() {

  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

    pinMode(enA,OUTPUT);
    pinMode(enB,OUTPUT);

    Serial.begin(9600);

      //pinMode(A2, INPUT); // initialize Left sensor as an input
      //pinMode(A1, INPUT); // initialize Right sensor as an input

}

void loop() {

LDRValue = analogRead(LDRV); //reads the ldr’s value through LDR
LFRValue = analogRead(LDR);
Serial.println(LDRValue); //prints the LDR values to serial monitor
Serial.println(LFRValue);
delay(500); //This is the speed by which LDR sends value to arduino

  //int LEFT_SENSOR = digitalRead(A0);
  //int RIGHT_SENSOR = digitalRead(A1);

if(RIGHT_SENSOR==0 && LEFT_SENSOR==0) {
    forward(); //FORWARD
}

  else if(RIGHT_SENSOR==0 && LEFT_SENSOR==1) {
    right(); //Move Right
 }

  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==0) {
    left(); //Move Left
}

  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==1) {
    Stop();  //STOP
 }
}


/*
void forward()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);

                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}
*/

/*
void backward()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}
*/

void right()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);

                analogWrite(enA, LeftRotationSpeed);
                analogWrite(enB, RightRotationSpeed);
}

void left()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, LeftRotationSpeed);
                analogWrite(enB, RightRotationSpeed);
}

/*
void Stop()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
}
*/