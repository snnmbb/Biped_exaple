#include <VarSpeedServo.h>
VarSpeedServo servo2;
VarSpeedServo servo3;
VarSpeedServo servo4;
VarSpeedServo servo5;
VarSpeedServo servo6;
VarSpeedServo servo7;
VarSpeedServo servo8;
VarSpeedServo servo9;
VarSpeedServo servo10;
VarSpeedServo servo11;


const int servoPin1 = 2;
const int servoPin2 = 3;
const int servoPin3 = 4;
const int servoPin4 = 5;
const int servoPin5 = 6;
const int servoPin6 = 7;
const int servoPin7 = 8;
const int servoPin8 = 9;
const int servoPin9 = 10;
const int servoPin10 = 11;

 // ค่าเริ่มต้นค่ากึ่งกลางของservo--------------------------------------------------------------
int valueservo1 = 84;
int valueservo2 = 95;
int valueservo3 = 90 ;
int valueservo4 = 90;
int valueservo5 = 90;
//------------------------------------------
int valueservo6 = 99;
int valueservo7 = 90;
int valueservo8 = 88;
int valueservo9 = 98;
int valueservo10 = 80;
//-----------------------------------------------------------------------------------------
void setup() {
  servo2.attach(servoPin1);
  servo3.attach(servoPin2);
  servo4.attach(servoPin3);
  servo5.attach(servoPin4);
  servo6.attach(servoPin5);
  servo7.attach(servoPin6);
  servo8.attach(servoPin7);
  servo9.attach(servoPin8);
  servo10.attach(servoPin9);
  servo11.attach(servoPin10);

  Serial.begin (9600);
}
void loop() {

   while (1)
      {
        stand();
        delay(1000);
        break;
      }
      while (1)
      {
        forward();
      }


}
void stand() 
{
  servo2.write(valueservo1, 60, false); //servo.write(Degree of servo , speed , false) : use false for make all of servo working at the same time.
  servo3.write(valueservo2, 60, false);
  servo4.write(valueservo3, 60, false);
  servo5.write(valueservo4, 60, false);
  servo6.write(valueservo5, 60, false);
  servo7.write(valueservo6, 60, false);
  servo8.write(valueservo7, 60, false);
  servo9.write(valueservo8, 60, false);
  servo10.write(valueservo9, 60, false);
  servo11.write(valueservo10, 60, false);
}


void forward() 
{
  //---------------1---------------------------------------------------

  servo2.write(valueservo1 + 10 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 - 10 , 30, false);
  servo7.write(valueservo6 + 10 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10 - 10, 30, false);
  delay(400);

  servo2.write(valueservo1 + 10 , 30, false);
  servo3.write (valueservo2, 30, false);
  servo4.write(valueservo3 , 30, false);
  servo5.write(valueservo4, 30, false);
  servo6.write(valueservo5 - 10 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 - 35, 30, false);
  servo9.write(valueservo8 - 50, 30, false);
  servo10.write(valueservo9 + 15, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 + 50 , 30, false);
  servo4.write(valueservo3 + 50 , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5, 30, false);
  servo7.write(valueservo6  , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
   servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10 , 30, false);
  delay(400);


  //  servo2.write(valueservo1 , 30, false);
  //  servo3.write(valueservo2 , 30, false);
  //  servo4.write(valueservo3  , 30, false);
  //  servo5.write(valueservo4  , 30, false);
  //  servo6.write(valueservo5 , 30, false);
  //  servo7.write(valueservo6 , 30, false);
  //  servo8.write(valueservo7 , 30, false);
  //  servo9.write(valueservo8, 30, false);
  //  servo10.write(valueservo9, 30, false);
  //  servo11.write(valueservo10, 30, false);
  //  delay(400);


  servo2.write(valueservo1 - 10 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 + 10 , 30, false);
  servo7.write(valueservo6 - 10 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10 + 10, 30, false);
  delay(400);

  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2 - 35, 30, false);
  servo4.write(valueservo3 - 50 , 30, false);
  servo5.write(valueservo4 + 10, 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 - 10  , 30, false);
  servo8.write(valueservo7  , 30, false);
  servo9.write(valueservo8  , 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10 + 10  , 30, false);
  delay(400);


  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2, 30, false);
  servo4.write(valueservo3 , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6  , 30, false);
  servo8.write(valueservo7 + 50 , 30, false);
  servo9.write(valueservo8 + 50 , 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10  , 30, false);
  delay(400);


}

void turnleft()
{

  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2 - 40, 30, false);
  servo4.write(valueservo3 - 50 , 30, false);
  servo5.write(valueservo4 + 10, 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6   , 30, false);
  servo8.write(valueservo7  , 30, false);
  servo9.write(valueservo8  , 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10   , 30, false);
  delay(500);

  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2 - 20, 30, false);
  servo4.write(valueservo3 + 40 , 30, false);
  servo5.write(valueservo4 - 50, 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6  , 30, false);
  servo8.write(valueservo7 + 10  , 30, false);
  servo9.write(valueservo8  , 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10  , 30, false);
  delay(400);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(300);

}
void turnright()
{
  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3 , 30, false);
  servo5.write(valueservo4, 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6   , 30, false);
  servo8.write(valueservo7 - 40 , 30, false);
  servo9.write(valueservo8 - 50 , 30, false);
  servo10.write(valueservo9 + 10, 30, false);
  servo11.write(valueservo10   , 30, false);
  delay(500);

  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2 + 10, 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6  , 30, false);
  servo8.write(valueservo7 - 20 , 30, false);
  servo9.write(valueservo8 + 40 , 30, false);
  servo10.write(valueservo9 - 50 , 30, false);
  servo11.write(valueservo10  , 30, false);
  delay(400);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(300);
}
void slide()
{
  servo2.write(valueservo1 - 30 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3 , 30, false);
  servo5.write(valueservo4, 30, false);
  servo6.write(valueservo5 + 30 , 30, false);
  servo7.write(valueservo6   , 30, false);
  servo8.write(valueservo7  , 30, false);
  servo9.write(valueservo8  , 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10  , 30, false);
  delay(400);

  servo2.write(valueservo1  , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 + 30 , 30, false);
  servo8.write(valueservo7  , 30, false);
  servo9.write(valueservo8  , 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10 - 30 , 30, false);
  delay(400);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

}
void standup()
{

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4 - 90 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9 - 90, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 - 45 , 30, false);
  servo4.write(valueservo3  - 20, 30, false);
  servo5.write(valueservo4 - 90 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 - 45, 30, false);
  servo9.write(valueservo8 - 20, 30, false);
  servo10.write(valueservo9 - 90, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);


  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 - 45 , 30, false);
  servo4.write(valueservo3  + 90, 30, false);
  servo5.write(valueservo4 - 90 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 - 45, 30, false);
  servo9.write(valueservo8 + 90, 30, false);
  servo10.write(valueservo9 - 90, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);


  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7, 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);

}

void standup2()
{

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4 + 90 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 , 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9 + 90, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);
  while (1);
  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 - 45 , 30, false);
  servo4.write(valueservo3  - 20, 30, false);
  servo5.write(valueservo4 - 90 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 - 45, 30, false);
  servo9.write(valueservo8 - 20, 30, false);
  servo10.write(valueservo9 - 90, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);


  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 - 45 , 30, false);
  servo4.write(valueservo3  + 90, 30, false);
  servo5.write(valueservo4 - 90 , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7 - 45, 30, false);
  servo9.write(valueservo8 + 90, 30, false);
  servo10.write(valueservo9 - 90, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);


  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7, 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10, 30, false);
  delay(1000);

}
void kick() {

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7, 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

  servo2.write(valueservo1 + 10 , 30, false);
  servo3.write (valueservo2, 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4, 30, false);
  servo6.write(valueservo5 - 10 , 30, false);
  servo7.write(valueservo6 + 10 , 30, false);
  servo8.write(valueservo7 - 30, 30, false);
  servo9.write(valueservo8 - 45, 30, false);
  servo10.write(valueservo9 + 10, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

  servo2.write(valueservo1 + 10  , 30, false);
  servo3.write (valueservo2, 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4 , 30, false);
  servo6.write(valueservo5 - 10 , 30, false);
  servo7.write(valueservo6 + 10 , 30, false);
  servo8.write(valueservo7 - 10, 30, false);
  servo9.write(valueservo8 - 45, 30, false);
  servo10.write(valueservo9 + 30, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

  servo2.write(valueservo1 + 10  , 80, false);
  servo3.write (valueservo2, 80, false);
  servo4.write(valueservo3  , 80, false);
  servo5.write(valueservo4 , 80, false);
  servo6.write(valueservo5 - 10  , 80, false);
  servo7.write(valueservo6 + 10 , 80, false);
  servo8.write(valueservo7 - 50, 80, false);
  servo9.write(valueservo8 + 25, 80, false);
  servo10.write(valueservo9 - 20, 80, false);
  servo11.write(valueservo10, 80, false);
  delay(400);

  servo2.write(valueservo1 + 10 , 30, false);
  servo3.write (valueservo2, 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4, 30, false);
  servo6.write(valueservo5 - 10 , 30, false);
  servo7.write(valueservo6 + 10 , 30, false);
  servo8.write(valueservo7 - 40, 30, false);
  servo9.write(valueservo8 + 25, 30, false);
  servo10.write(valueservo9 - 50, 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

  servo2.write(valueservo1 , 30, false);
  servo3.write(valueservo2 , 30, false);
  servo4.write(valueservo3  , 30, false);
  servo5.write(valueservo4  , 30, false);
  servo6.write(valueservo5 , 30, false);
  servo7.write(valueservo6 , 30, false);
  servo8.write(valueservo7, 30, false);
  servo9.write(valueservo8, 30, false);
  servo10.write(valueservo9 , 30, false);
  servo11.write(valueservo10, 30, false);
  delay(400);

}
//void RC()
//{
//  //--------------------------------forward----------------------------------------------------------------
//  if (Channel2 > 1600 && Channel2 < 2000  )//forward
//  {
//    forward();
//  }
//
//  //--------------------------------turnright----------------------------------------------------------------
//  else if (Channel1 > 1500 && Channel1 < 2000  ) //turnright
//  {
//    turnleft();
//  }
//
//  //--------------------------------turnleft----------------------------------------------------------------
//  else if ( Channel1 < 1300 && Channel1 > 900 )//turnleft
//  {
//    turnright();
//  }
//  //--------------------------------slide-----------------------------------------------------------------
//  else if ( Channel3 < 2100 && Channel3 > 1500 )//turnleft
//  {
//    slide();
//  }
//  else if ( Channel4 < 2000 && Channel4 > 1500 )//turnleft
//  {
//    standup ();
//  }
//  else if ( Channel4 < 1300 && Channel4 > 900 )//turnleft
//  {
//    standup2 ();
//  }
//  else if ( Channel2 < 1400 && Channel2 > 900 )//turnleft
//  {
//
//    kick ();
//  }
//  else
//  {
//    stand();
//  }
//}
