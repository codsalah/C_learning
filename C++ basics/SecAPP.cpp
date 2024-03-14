#include <iostream>

using namespace std;

int main() {
    double Kilo;
    double Bytes;
    double Bits;

    cout << "Enter the number of Kilobytes: ";
    cin >> Kilo;

    Bytes = 1024 * Kilo;
    Bits = Bytes * 8;

    cout << "Number of Kilobytes: " << Kilo << " kilobytes\n";
    cout << "Number of Bytes is: " << Bytes << " Bytes\n";
    cout << "The number of Bits: " << Bits << " Bits\n";

    return 0;
}
