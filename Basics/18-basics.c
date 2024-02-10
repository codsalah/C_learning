#include <stdio.h>
#include <stdlib.h>

unsigned short Numbers[10] = {0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88,0x99,0x999};
unsigned short *Ptr1 = NULL;
unsigned short *Ptr2 = NULL;

int main()
{
    Ptr1 = &Numbers[0];
    Ptr2 = &Numbers[9];

    if(Ptr2 > Ptr1){
        printf("Yes \n");
    }

    while(Ptr2 >= Ptr1){
        printf("0x%X \t", *Ptr2);
        Ptr2 -= 1;
    }

    printf("\n");

    Ptr1 = &Numbers[0];
    Ptr2 = &Numbers[9];

    while(Ptr1 <= Ptr2){
        printf("0x%X \t", *Ptr1);
        Ptr1 += 1;
    }

    return 0;
}
