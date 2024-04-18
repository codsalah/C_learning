#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input
    string F1, S1, F2, S2;
    getline(cin, F1); // Read entire line including spaces
    getline(cin, S1); // Read entire line including spaces
    getline(cin, F2); // Read entire line including spaces
    getline(cin, S2); // Read entire line including spaces

    // Check if second names are equal
    if (S1 == S2)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;

    system("pause"); // Wait for user to press a key
    return 0;
}