
#include <AccelStepper.h>

// Define some steppers and the pins the will use
AccelStepper stepper1(5, 10, 11, 12, 13);
// The first argument '5' indicates that we're using a 28byj-48 geared motor. The rest is just pin numbers.
//You can still use all the other types of motors supported by accelstepper library (e.g. 4 for a normal 4 wire step motor, 8 for a halfstepped normal 4 wire motor etc.)
AccelStepper stepper2(5, 4, 5, 6, 7);


void setup()
{
  stepper1.setMaxSpeed(500.0);
  stepper1.setAcceleration(400);
  stepper1.moveTo(1000000);
  stepper2.setMaxSpeed(900.0);
  stepper2.setAcceleration(400);
  stepper2.moveTo(-1000000);
}

void loop()
{
  stepper1.run();
  stepper2.run();

}


