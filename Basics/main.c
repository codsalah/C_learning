#include <stdio.h>
#include <stdlib.h>

#include "motor.h"

static unsigned int MotorVersion = 0;

int main()
{
    /*
    MoveMotorForward();
    MoveMotorBackward();
    MoveMotorLeft();
    MoveMotorRight();

    MotorVersion = GetMotor_SW_Version();
    printf("Motor SW Vesrion = %i \n", MotorVersion);
    */

    /*
    MoveMotorLeft();
    SetMotorSpeed(20);
    MoveMotorLeft();
    SetMotorSpeed(60);
    MoveMotorLeft();
    */

    MoveMotorForward();
    MoveMotorForward();
    MoveMotorForward();
    MoveMotorForward();
    MoveMotorForward();

    return 0;
}
