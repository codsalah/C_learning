#include <stdio.h>

int main() {
    // --------------------------- Some Incorrect Declarations ---------------------------- //

    //float num1 = 200E; // Incorrect, missing the exponent part
    // Corrected: float num1 = 200.0E5;

    //long num2 = 123456789012345; // Incorrect, missing the 'L' suffix
    // Corrected: long num2 = 123456789012345L;

    //unsigned int num3 = -42U; // Incorrect, negative value with 'U' suffix
    // Corrected: unsigned int num3 = 42U;

    //int num4 = 0xG1F; // Incorrect, 'G' is not a valid hexadecimal digit
    // Corrected: int num4 = 0x1F;

    //double num5 = 3.14D; // Incorrect, 'D' is not needed
    // Corrected: double num5 = 3.14;

    //float num6 = 5.FF; // Incorrect, extra 'F' at the end
    // Corrected: float num6 = 5.0F;

    //long double num7 = 6.78L1; // Incorrect, misplaced 'L'
    // Corrected: long double num7 = 6.78L;

    // --------------------------- corrected Declarations ---------------------------- //
    float num1 = 200.0E5;
    long long num2 = 123456789012345L;
    unsigned int num3 = 42U;
    int num4 = 0x1F;
    double num5 = 3.14;
    float num6 = 5.0F;
    long double num7 = 6.78L;

    printf("num1 = %f\n", num1);
    printf("num2 = %lld\n", num2);
    printf("num3 = %u\n", num3);
    printf("num4 = %d\n", num4);
    printf("num5 = %f\n", num5);
    printf("num6 = %f\n", num6);
    printf("num7 = %Lf\n", num7); 

    return 0;
}