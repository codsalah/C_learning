#include<iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    
    // Check if b is not zero before performing division
    if (b != 0) {
        cout << a / b << "\n";
    } else {
        cout << "Cannot divide by zero.\n";
    }
    
    return 0;
}