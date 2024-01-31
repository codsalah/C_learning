#include <stdio.h>
#include <stdlib.h>

int number;

unsigned NumTwo = 3;
unsigned int Test1, Test2, Test3 = 8; // variable list
// not that test3 is the only var that has the value 8
// note that i cant make it (not recommended) 
//char Test1, char Test2

int test88;
int test99 = 0; // global variable it already has zero as an inital value 
// not recommended to give it init value 0

extern int test1;
extern int test1;
extern int test1; // double declare for this will not give you syntax error

const int var_1 = 4; // Constant that cannot be changed

int *ptr;

int main()
{
    const int var_2 = 6; // Corrected the declaration
    printf("size of NumTwo = %lu Bytes\n", sizeof(NumTwo)); // Use %lu for printing sizeof result
    printf("test3 %i\n", Test3);
    printf("test2 = %i\n", Test2);
    printf("var1 = %d\n", var_2); // Use %d for constants
    // var_1 = 5; // This line will result in a compilation error
    printf("var1 = %i\n", var_1); // Use %i for constants
    return 0;
}
