#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    bool found = false; // To track if any lucky number is found

    for (int i = A; i <= B; ++i) {
        int num = i;
        bool isLucky = true; // Assume the number is lucky initially

        while (num != 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false; // If any digit is not 4 or 7, it's not a lucky number
                break; // No need to check further
            }
            num /= 10;
        }

        if (isLucky) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1; // If no lucky number is found between A and B
    }

    return 0;
}
