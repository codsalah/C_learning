#include <stdio.h>

int main() {
    int A = 5;
    int B = 10;

    // Equal to (==)
    if (A == B) {
        printf("A is equal to B.\n");
    } else {
        printf("A is not equal to B.\n");
    }

    // Not equal to (!=)
    if (A != B) {
        printf("A is not equal to B.\n");
    } else {
        printf("A is equal to B.\n");
    }

    // Greater than (>)
    if (A > B) {
        printf("A is greater than B.\n");
    } else {
        printf("A is not greater than B.\n");
    }

    // Less than (<)
    if (A < B) {
        printf("A is less than B.\n");
    } else {
        printf("A is not less than B.\n");
    }

    // Greater than or equal to (>=)
    if (A >= B) {
        printf("A is greater than or equal to B.\n");
    } else {
        printf("A is not greater than or equal to B.\n");
    }

    // Less than or equal to (<=)
    if (A <= B) {
        printf("A is less than or equal to B.\n");
    } else {
        printf("A is not less than or equal to B.\n");
    }

    // Logical AND (&&)
    if (A > 0 && B > 0) {
        printf("A and B are both greater than 0.\n");
    } else {
        printf("At least one of A or B is not greater than 0.\n");
    }

    // Logical OR (||)
    if (A > 0 || B > 0) {
        printf("At least one of A or B is greater than 0.\n");
    } else {
        printf("Neither A nor B is greater than 0.\n");
    }

    // Logical NOT (!)
    if (!(A == B)) {
        printf("A is not equal to B.\n");
    } else {
        printf("A is equal to B.\n");
    }

    return 0;
}
