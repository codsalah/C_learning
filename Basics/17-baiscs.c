#include <stdio.h>
#include <stdlib.h>

unsigned short Numbers[10] = {0x11,0x22,0x33,0x44,0x55,0x11,0x22,0x33,0x44,0x55};
unsigned short *Ptr = NULL;

int main()
{
    Ptr = &Numbers[0];
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr += 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    printf("------------------------- \n");

    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);
    Ptr -= 1;
    printf("Ptr = 0x%X - Value = %X \n", Ptr, *Ptr);

    return 0;
}
