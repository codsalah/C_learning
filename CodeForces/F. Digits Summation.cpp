#include <iostream>
using namespace std;

int main() {
    long long num1, num2;
    cin >> num1>> num2;

    int lastnum1 = num1 % 10;
    int lastnum2 = num2 % 10;
    cout << lastnum1 + lastnum2<< endl;
}