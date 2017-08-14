
#include <AccelStepper.h>

// Define some steppers and the pins the will use
AccelStepper stepper1(5, 10, 11, 12, 13);
// The first argument '5' indicates that we're using a 28byj-48 geared motor. The rest is just pin numbers.
//You can still use all the other types of motors supported by accelstepper library (e.g. 4 for a normal 4 wire step motor, 8 for a halfstepped normal 4 wire motor etc.)
AccelStepper stepper2(5, 4, 5, 6, 7);


void setup()
{
  stepper1.setMaxSpeed(900.0);
  stepper1.setAcceleration(400);
  stepper1.moveTo(-4000);
  stepper2.setMaxSpeed(900.0);
  stepper2.setAcceleration(400);
  stepper2.moveTo(4000);
}

void loop()
{

 if (stepper1.distanceToGo() == 0)
  {
    // Random change to speed, position and acceleration
    // Make sure we dont get 0 speed or accelerations
    stepper1.moveTo(rand() % 5000 - 2000);
    stepper1.setMaxSpeed((rand() % 200) + 200);
    stepper1.setAcceleration((rand() % 800) + 200);
  }
  stepper1.run();

  if (stepper2.distanceToGo() == 0)
  {
    // Random change to speed, position and acceleration
    // Make sure we dont get 0 speed or accelerations
    stepper2.moveTo(rand() % 10000 - 5000);
    stepper2.setMaxSpeed(800);
    stepper2.setAcceleration((rand() % 800) + 200);
  }
  stepper2.run();
}
