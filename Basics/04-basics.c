#include <stdio.h>
#include <stdlib.h>

unsigned char Btn_State = 0xF0;     /* 1111 0000 */
unsigned char Btn1_State = 0;
unsigned char Btn2_State = 0;

int main()
{
    printf("Please enter BTN1 state : ");
    scanf("%hhu", &Btn1_State);

    if (1 == Btn1_State) {
        printf("Btn state is High\n");
        Btn_State |= 0b00000001;
        printf("Btn_State = 0x%X\n", Btn_State);
    } else if (0 == Btn1_State) {
        printf("Btn state is Low\n");
    } else {
        printf("Invalid State!!\n\n");
    }

    printf("Please enter BTN2 state : ");
    scanf("%hhu", &Btn2_State);

    if (1 == Btn2_State) {
        printf("Btn state is High\n");
        Btn_State |= 0b00000010;
        printf("Btn_State = 0x%X\n", Btn_State);
    } else if (0 == Btn2_State) {
        printf("Btn state is Low\n");
    } else {
        printf("Invalid State!!\n\n");
    }

    printf("Please enter BTN1 state : ");
    scanf("%hhu", &Btn1_State);

    if (1 == Btn1_State) {
        printf("Btn state is High\n");
    } else if (0 == Btn1_State) {
        printf("Btn state is Low\n");
        Btn_State &= 0b11111110;
        printf("Btn_State = 0x%X\n", Btn_State);
    } else {
        printf("Invalid State!!\n\n");
    }

    return 0;
}
