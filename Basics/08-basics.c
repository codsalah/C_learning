#include <stdio.h>
#include <stdlib.h>

unsigned int Counter;

int main()
{
    /*
    while(1){
        printf("Hello Again \n");

        for(Counter = 1; Counter <= 5; Counter++){
            printf("salah \n");
            Sleep(250);
        }
    }
    */

    for(Counter = 0; Counter <= 5; Counter++){
        printf("wow \n");
        if(Counter == 3){
            continue;
        }
        printf("salah \n");
    }



    return 0;
}
