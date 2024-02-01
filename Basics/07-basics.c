#include <stdio.h>
#include <stdlib.h>

char User_Operator;
float NumberOne, NumberTwo;

int main() {
    printf("Please enter the Operator (+, -, *, /): ");
    scanf(" %c", &User_Operator); 

    printf("Please enter the first number: ");
    scanf("%f", &NumberOne);

    printf("Please enter the second number: ");
    scanf("%f", &NumberTwo);

    switch (User_Operator) {
    case '+':
        printf("Result: %0.2f + %0.2f = %0.2f \n", NumberOne, NumberTwo, NumberOne + NumberTwo);
        break;

    case '-':
        printf("Result: %0.2f - %0.2f = %0.2f \n", NumberOne, NumberTwo, NumberOne - NumberTwo);
        break;

    case '*':
        printf("Result: %0.2f * %0.2f = %0.2f \n", NumberOne, NumberTwo, NumberOne * NumberTwo);
        break;

    case '/':
        if (NumberTwo != 0) {
            printf("Result: %0.2f / %0.2f = %0.2f \n", NumberOne, NumberTwo, NumberOne / NumberTwo);
        } else {
            printf("Error: Division by zero is undefined.\n");
        }
        break;

    default:
        printf("Invalid Operator !!!\n");
        break;
    }

    return 0;
}
