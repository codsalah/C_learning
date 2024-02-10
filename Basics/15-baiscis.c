#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 5;

void AddOne(unsigned int *number);
unsigned int AddOneRet(unsigned int number);

int main()
{
    printf("NumberOne = %i \n", NumberOne);
    AddOne(&NumberOne);
    printf("NumberOne = %i \n", NumberOne);

    unsigned int result = AddOneRet(NumberOne);

    return 0;
}

void AddOne(unsigned int *number){
    *number = *number + 1;
}

unsigned int AddOneRet(unsigned int number){
    return (number + 1);
}
