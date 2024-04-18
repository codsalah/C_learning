#include <iostream>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N; // number for which factorial is to be calculated
        cin >> N;

        long long factorial = 1;
        for (int i = 1; i <= N; ++i) {
            factorial *= i;
        }

        cout << factorial << endl;
    }

    return 0;
}
