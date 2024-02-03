#include <stdio.h>

int Temp = 0;

int main()
{
    while (1) {
        if (Temp > 20) {
            printf("Lamp is on\n");
        }
        Temp++;
        printf("Test\n");
    }

    return 0;
}