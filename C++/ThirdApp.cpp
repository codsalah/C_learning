#include <iostream>

using namespace std;

main () 
{
    char ur_char;
    int ur_int;

    cout << "Enter your char:";
    cin >> ur_char;
    cout << "your ASCII code is: " << int(ur_char) << "\n";

    cout << "Enter your number: ";    
    if (cin >> ur_int) {
        if (ur_int >= 32 && ur_int <= 126) {
            cout << "Your character is: " << static_cast<char>(ur_int) << "\n";
        } else {
            cout << "Entered number does not correspond to a printable character\n";
        }
    } else {
        cout << "Invalid input for number\n";
    }
    
    return 0;
}