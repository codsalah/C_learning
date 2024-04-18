#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N; // Input number

        int reversedN = 0;
        while (N > 0) {
            reversedN = reversedN * 10 + N % 10;
            N /= 10;
        }

        // Print the reversed digits separated by space
        while (reversedN > 0) {
            cout << reversedN % 10;
            reversedN /= 10;
            if (reversedN > 0)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
