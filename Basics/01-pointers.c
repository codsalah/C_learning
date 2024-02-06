#include <stdio.h>
#include <stdlib.h>

// Define two unsigned integers
unsigned int NumberOne = 55;
unsigned int NumberTwo = 66;

// Declare a pointer to an unsigned integer
unsigned int *Ptr;

int main()
{
    // Assign the address of NumberOne to Ptr
    Ptr = &NumberOne;

    // Print the address and value that Ptr points to
    printf("Ptr Address = 0x%X \n", Ptr); //print the address pf num1
    printf("Ptr Value   = %i \n", *Ptr); //print num1 value

    // Print the value of NumberOne before and after modifying it through Ptr
    printf("NumberOne = %i\n", NumberOne);
    *Ptr = 99;
    printf("NumberOne = %i\n", NumberOne);

    // Modify the values of NumberOne and NumberTwo directly
    NumberOne = 2;
    NumberTwo = 3;

    // Declare two pointers and assign them the addresses of NumberOne and NumberTwo
    unsigned int *Ptr1 = &NumberOne;
    unsigned int *Ptr2 = &NumberTwo;

    // Calculate the sum of NumberOne and NumberTwo in two different ways
    unsigned int Result = *(&NumberOne) + *(&NumberTwo);
    printf("Result = %i \n", Result);

    Result = *(Ptr1) + *(Ptr2);
    printf("Result = %i \n", Result);

    return 0;
}
