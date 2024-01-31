#include <stdio.h>
#include <limits.h>

/* 
variable diff -> define and declare
var declare -> there is a var but not defined in my memory
*/

// declare variables here
extern unsigned int test99; // got no location in memeory 
// wont print anything if i tried to assign a value to it
unsigned int test90 ; // definiton not declaration 
unsigned int Num1 = 4; // definition and declaration
unsigned int Num2 = 10;
unsigned char char1 = 'a' ;
unsigned char char2 = 'b' ;
float test_f = 3.141; 
float test_f2 = 6.6666666666666666;

int main(){
    // string is a sequence of charachters

    printf("number 1 = %i\n",Num1);
    printf("num2 = %i\n", Num2);
    printf("test float = %0.2f\n", test_f);
    printf("ascii code of char 1 = %i\n", char1);
    printf("ascii code of char 2 = %i\n", char2);
    printf("size of char 1 = %i\n", sizeof(char1));
    printf("sizeof integer = %i\n", sizeof(int));
    printf("sizeof float = %i\n", sizeof(float));
    printf("size of int %i \n", sizeof(long long));
    printf("size of long float %f\n", sizeof(test_f2));
    printf("limits of char is %d min, %d max\n", INT_MAX, INT_MAX); 
    // note signed and unsigned flaot are syntax errors

}