#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "______________\n";
    while (num1 <= num2) {
        cout << num1 << "\n";
        num1++;
    }
    cout << endl;

    return 0;
}