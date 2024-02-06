#include <stdio.h>

unsigned int NumberOne;

unsigned int *Ptr1 = &NumberOne;
unsigned int *Ptr3 = NULL;

int main()
{
    unsigned int NumberTwo = 0;
    unsigned int *Ptr2 = &NumberTwo; 

    printf("Address = 0x%X \n", Ptr1);
    //printf("Address = %i \n", *Ptr1);

    printf("Address = 0x%X \n", Ptr2);
    //printf("Address = %i \n", *Ptr2);
    *Ptr2 = 0;
    printf("Value at address = %u \n", *Ptr2); 

    Ptr3 = &NumberOne;
    *Ptr3 = 55;

    return 0;
}