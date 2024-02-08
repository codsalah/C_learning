#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 2;
unsigned int NumberTwo = 3;
unsigned int NumberThree = 4;

unsigned char Get_Square(unsigned int *PtrNum1, unsigned int *PtrNum2, unsigned int *PtrNum3);
unsigned char SquareNumber(unsigned int *Ptr);

int main()
{
    unsigned char Error_Status = 0;

    printf("%i\t%i\t%i\n", NumberOne, NumberTwo, NumberThree);

    Error_Status = Get_Square(&NumberOne, &NumberTwo, &NumberThree);
    if(1 == Error_Status){
        printf("Error !! \n");
    }

    Error_Status = Get_Square(&NumberOne, &NumberTwo, NULL);
    if(1 == Error_Status){
        printf("Error !! \n");
    }

    printf("%i\t%i\t%i\n", NumberOne, NumberTwo, NumberThree);

    return 0;
}

unsigned char Get_Square(unsigned int *PtrNum1, unsigned int *PtrNum2, unsigned int *PtrNum3){
    unsigned char Error_RetVal = 0; /* No Error */

    if((PtrNum1 == NULL) || (PtrNum2 == NULL) || (PtrNum3 == NULL)){
        Error_RetVal = 1; /* Error */
    }
    else{
        *PtrNum1 *= *PtrNum1;
        *PtrNum2 *= *PtrNum2;
        *PtrNum3 *= *PtrNum3;
    }

    return Error_RetVal;
}

unsigned char SquareNumber(unsigned int *Ptr){
    unsigned char Error_RetVal = 0; /* No Error */

    if(NULL == Ptr){
        Error_RetVal = 1; /* Error */
    }
    else{
        *Ptr *= *Ptr;
    }

    return Error_RetVal;
}
