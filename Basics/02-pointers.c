#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 0x11223344;

unsigned char *Ptr1;
unsigned short *Ptr2;
unsigned int *Ptr3;

int main()
{
    Ptr1 = &NumberOne;
    Ptr2 = &NumberOne;
    Ptr3 = &NumberOne;

    printf("Value = 0x%x \n", *Ptr1);
    printf("Value = 0x%x \n", *Ptr2);
    printf("Value = 0x%x \n", *Ptr3);

    printf("Size of Ptr1 = %i \n", sizeof(Ptr1));
    printf("Size of Ptr2 = %i \n", sizeof(Ptr2));
    printf("Size of Ptr3 = %i \n", sizeof(Ptr3));

    return 0;
}
