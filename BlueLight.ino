#include <Servo.h> 

#define LED 3
#define servoPin 4
#define SERVO_DELAY 2000
int sweep = 180; //degrees total
int stepsize = 1; //degree per step

Servo myservo;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{  
  if ( Serial.available() )
  {
    Serial.println("BT Data received: "); 
    char c = Serial.read();

    switch( c )
    {
      case( 'L' ):
        
        Serial.print( "ON" );
        digitalWrite( LED, HIGH );
        myservo.attach(servoPin);
        myservo.write(-180);
        delay(SERVO_DELAY);
        myservo.detach();
        break;
        
      case( 'D' ):
        
        Serial.print( "OFF" );
        digitalWrite( LED, LOW );
        myservo.attach(servoPin);
        myservo.write(180);
        delay(SERVO_DELAY);
        myservo.detach();
        break;
      
      default:
        Serial.print( "..." );
        break;
    }
  }

}
