#include<iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the range (start end): ";
    cin >> start >> end;
    cout << "Prime numbers within the range " << start << " to " << end << " are:\n";
    
    for (int num = start; num <= end; num++) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false; // Numbers less than or equal to 1 are not prime
        } else {
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    isPrime = false; // If num is divisible by any number other than 1 and itself, it's not prime
                    break;
                }
            }
        }
        if (isPrime) {
            cout << num << " "; // Print the prime number
        }
    }
    
    cout << endl;
    return 0;
}