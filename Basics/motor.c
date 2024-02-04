
#include "motor.h"

static unsigned int MotorModule_SW_Version = 6;
static unsigned int MotorSpeed = 0;

static void PrintMoveMotorBackward_8_Times(void);

void MoveMotorForward(void){
    unsigned int Number = 0;
    static unsigned int NoOfCalling = 0;

    printf("Move Motor Forward \n");
    printf("NoOfCalling = %i \n", NoOfCalling);
    NoOfCalling++;
}

void MoveMotorBackward(void){
    PrintMoveMotorBackward_8_Times();
    PrintMoveMotorBackward_8_Times();
}

static void PrintMoveMotorBackward_8_Times(void){
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
    printf("Move Motor Backward \n");
}

void MoveMotorLeft(void){
    printf("Move Motor Left \n");
    printf("Motor Speed = %i\n", MotorSpeed);
}

void MoveMotorRight(void){
    printf("Move Motor Right \n");
}

unsigned int GetMotor_SW_Version(void){
    return MotorModule_SW_Version;
}

void SetMotorSpeed(unsigned int MS){
    if((MS < 0) || (MS > 50)){
        printf("Speed out of range !!! \n");
    }
    else{
        MotorSpeed = MS;
    }
}











