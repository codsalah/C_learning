#include <stdio.h>
#include <stdlib.h>

unsigned int numberOne = 55;
unsigned int numberTwo = 66;

void Swap_Numbers_T1(unsigned int num1, unsigned int num2);

int main()
{
    printf("numberOne = %i \t numberTwo = %i \n", numberOne, numberTwo);
    Swap_Numbers_T1(numberOne, numberTwo);
    Swap_Numbers_T2(&numberOne, &numberTwo);
    printf("numberOne = %i \t numberTwo = %i \n", numberOne, numberTwo);
    return 0;
}

void Swap_Numbers_T1(unsigned int num1, unsigned int num2){
    unsigned int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("numberOne = %i \t numberTwo = %i \n", num1, num2);
}

void Swap_Numbers_T2(unsigned int *PtrNum1, unsigned int *PtrNum2){
    unsigned int temp = 0;
    temp = *PtrNum1;
    *PtrNum1 = *PtrNum2;
    *PtrNum2 = temp;
    printf("numberOne = %i \t numberTwo = %i \n", numberOne, numberTwo);
}















