#include <stdio.h>
#include <stdlib.h>

unsigned int number_3 = 44;

unsigned int hamada_var = 99;

// Function prototype
void print_ahmed(void);

int main()
{
    unsigned int number_1 = 44;
    auto unsigned int number_2 = 55;

    // Call the function after the prototype
    print_ahmed();

    return 0;
}

void print_ahmed(void)
{
    auto unsigned int number_1;
    unsigned int number_2;
    unsigned int *Ptr = NULL;

    register unsigned int counter = 0;

    for(counter = 0; counter <= 8000; counter++){

    }

    //Ptr = &counter;
}
