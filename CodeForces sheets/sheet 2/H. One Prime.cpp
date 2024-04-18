#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    // loop for the numbers lower than or equal to N

    int factors = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            factors++;
        }
    }

    if (factors == 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
