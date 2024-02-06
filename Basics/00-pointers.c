#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int NumberTwo = 66;
unsigned int NumberThree = 88;

unsigned short Number1 = 11;
unsigned short Number2 = 22;

unsigned int *Ptr1;
unsigned int* Ptr2; // This is also valid, spacing around '*' is a matter of preference
unsigned int * Ptr3;
unsigned short *Ptr4;
char *Ptr5;

// Declare multiple variables of different types in a single line
unsigned int *PPtr, Number_1, Number_2 = 3;  // Note: Number_1 and Number_2 are not pointers


int main()
{
    // Assign address of NumberOne to Ptr1
    Ptr1 = &NumberOne;

    // Print information about NumberOne using pointers
    printf("NumberOne Value   = %i\n", NumberOne);
    printf("NumberOne Address = 0x%X\n", &NumberOne);
    printf("NumberOne Address = 0x%X\n", Ptr1);
    printf("NumberOne Value   = %i\n", *(&NumberOne));
    printf("NumberOne Value   = %i\n", *(Ptr1));

    // Change Ptr1 to point to NumberTwo and print its address
    Ptr1 = &NumberTwo;
    printf("NumberTwo Address = 0x%X\n", Ptr1);

    // Change Ptr1 to point to NumberThree and print its address
    Ptr1 = &NumberThree;
    printf("NumberThree Address = 0x%X\n", Ptr1);

    // Assign address of Number1 to Ptr4 and print it
    Ptr4 = &Number1;
    printf("Number1 Address = 0x%X\n", Ptr4);

    // Change Ptr4 to point to Number2 and print its address
    Ptr4 = &Number2;
    printf("Number2 Address = 0x%X\n", Ptr4);

    return 0;
}