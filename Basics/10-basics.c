#include <stdio.h>
#include <stdlib.h>

unsigned int Number_1 = 99;

int main()
{
    unsigned int Number_1 = 11;
    printf("Number_1 = %i \n", Number_1); /* 11 */
    {
        printf("Number_1 = %i \n", Number_1); /* 11 */
        unsigned int Number_1 = 22;
        printf("Number_1 = %i \n", Number_1); /* 22 */
        {
            printf("Number_1 = %i \n", Number_1); /* 22 */
            unsigned int Number_1 = 33;
            printf("Number_1 = %i \n", Number_1); /* 33 */
        }
        printf("Number_1 = %i \n", Number_1); /* 22 */
    }
    printf("Number_1 = %i \n", Number_1); /* 11 */

    return 0;
}