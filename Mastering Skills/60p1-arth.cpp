#include<iostream>
using namespace std;

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    if((num1 % 2 != 0 ) &&(num2 % 2 !=0))
    {
        cout << "product is "<< (float)num1 * (float)num2;
    }
    else if ((num1 % 2 == 0 ) &&(num2 % 2 ==0))
    {
        cout << "div is "<< (float)num1 / (float)num2;
    }
    else if ((num1 % 2 != 0 ) &&(num2 % 2 ==0))
    {
        cout << "sum is "<< (float)num1 + (float)num2;

    }
    else
    {
        cout << "sub is "<< (float)num1 - (float)num2;

    }

}