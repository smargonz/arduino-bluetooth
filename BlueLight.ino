//=============================//
//   BLUELIGHT v1              //
//     Arduino+Android+BT      //
//                             //
//     Authors:                //
//       dpeter (GH: sarenji)  //
//       smargonz              //
//=============================//

#include <Servo.h> 

#define LED 3
#define servoPin 4
#define SERVO_DELAY 1500

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
        //Serial.print( "..." );
        break;
    }
  }
}
