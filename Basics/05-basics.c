#include <stdio.h>
#include <stdlib.h>

// Declare and initialize two unsigned integers
unsigned int Number1 = 5;
unsigned int Number2 = 52;

int main()
{
    // Increment Number1 by 1
    Number1 += 1; // => Number1 = Number1 + 1;

    // Left shift operations on Number1
    printf("Result = %i \n", (Number1 << 1));
    printf("Result = %i \n", (Number1 << 2));
    printf("Result = %i \n", (Number1 << 3));

    // Right shift operations on Number2, casting the result to float
    printf("Result = %0.3f  \n", (float)(Number2 >> 1));
    printf("Result = %0.3f  \n", (float)(Number2 >> 2));
    printf("Result = %0.3f  \n", (float)(Number2 >> 3));
    printf("Result = %0.3f  \n", (float)(Number2 >> 4));
    printf("Result = %0.3f  \n", (float)(Number2 >> 5));

    // Print the memory addresses of Number1 and Number2
    printf("address = 0x%X \n", &Number1);
    printf("address = 0x%X \n", &Number2);

    // Print the value at the memory address of Number1 using pointer dereference
    printf("Value = %i \n", *(&Number1));

    // Print a constant value as a test
    printf("Test = %i \n", 4);

    // Return 0 to indicate successful execution
    return 0;
}
