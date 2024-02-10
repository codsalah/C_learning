#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int *Ptr = &NumberOne;

int main()
{
    printf("NumberOne Address = 0x%X \n", Ptr);
    Ptr = Ptr + 1;
    printf("NumberOne Address = 0x%X \n", Ptr);
    Ptr = Ptr + 1;
    printf("NumberOne Address = 0x%X \n", Ptr);
    Ptr = Ptr + 1;
    printf("NumberOne Address = 0x%X \n", Ptr);
    return 0;
}
