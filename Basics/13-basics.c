#include <stdio.h>
#include <stdlib.h>

unsigned int Number1 = 55;
unsigned short Number2 = 66;
unsigned char Number3 = 77;

void *Ptr = NULL;

int main()
{
    printf("Size of void %i \n", sizeof(void)); /* GCC compiler : 1 */

    printf("Size of Ptr %i \n", sizeof(Ptr));

    Ptr = &Number1;
    printf("Number1 Address = 0x%X \n", Ptr);
    printf("Number1 Value   = %i \n", *((unsigned int *)Ptr));

    Ptr = &Number2;
    printf("Number2 Address = 0x%X \n", Ptr);
    printf("Number2 Value   = %i \n", *((unsigned short *)Ptr));

    Ptr = &Number3;
    printf("Number3 Address = 0x%X \n", Ptr);
    printf("Number3 Value   = %i \n", *((unsigned char *)Ptr));

    *((unsigned char *)Ptr) = 22;
    printf("Number3 Value   = %i \n", *((unsigned char *)Ptr));

    return 0;
}