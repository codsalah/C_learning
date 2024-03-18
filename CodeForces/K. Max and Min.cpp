#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Assume A is the minimum and maximum initially
    double minNum = A;
    double maxNum = A;

    // Compare with B
    if (B < minNum)
        minNum = B;
    if (B > maxNum)
        maxNum = B;

    // Compare with C
    if (C < minNum)
        minNum = C;
    if (C > maxNum)
        maxNum = C;

    // Output
    cout << minNum << " " << maxNum << endl;

    return 0;
}