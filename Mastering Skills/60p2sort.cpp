#include<iostream>
using namespace std;

int main() {

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int result = -1;

    if (num1 < 100 && num1 > result) {
        result = num1;
    }

    if (num2 < 100 && num2 > result) {
        result = num2;
    }

    if (num3 < 100 && num3 > result) {
        result = num3;
    }

    cout << "Biggest num that is less than 100 is: "<< result;

    return 0;

}