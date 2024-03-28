#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string F1, S1, F2, S2;
    cin >> F1 >> S1 >> F2 >> S2;

    // Check if second names are equal
    if (S1 == S2)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;

    return 0;
}