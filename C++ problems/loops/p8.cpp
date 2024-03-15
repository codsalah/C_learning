#include <iostream>

using namespace std;

int main() {
    double sum = 0, a;
    int n, i;

    cout << "\n Find the sum of the series 1 + 1/2^2 + 1/3^3 +.....+ 1/n^n:\n";
    cout << "----------------------------------------------------------------\n";

    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        double term = 1;
        for (int j = 0; j < i; ++j) {
            term *= i; // multiplying 'i' 'i' times
        }
        a = 1 / term;
        cout << "1/" << i << "^" << i << " = " << a << endl;
        sum += a;
    }

    cout << " The sum of the above series is: " << sum << endl;

    return 0;
}
