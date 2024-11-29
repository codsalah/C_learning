#include <iostream>
using namespace std;

bool is_prime(int num) {
    // A number less than or equal to 1 is not a prime
    if (num <= 1)
        return false;
    // check for divisor from 2 to the square root of num
    for (int i = 2; i * i <= num; ++i) {
        // if num is divisible by any num in this range, it is not prime
        if (num % i == 0)
            return false;
    }
    // If no divisor were found num is prime/
    return true;
}

// function to find the nth prime num
int nth_prime(int n) {
    for (int i = 2; ; ++i) {
        if (is_prime(i)) {
            --n;
            if (n == 0)
                return i;
        }
    }
}

int main() {
    // Test Case 1: Find the 1st prime number
    int result = nth_prime(1);
    cout << "The 1st prime number is: " << result << endl;  // Expected output: 2

    // Test Case 2: Find the 5th prime number
    result = nth_prime(5);
    cout << "The 5th prime number is: " << result << endl;  // Expected output: 11

    // Test Case 3: Find the 10th prime number
    result = nth_prime(10);
    cout << "The 10th prime number is: " << result << endl;  // Expected output: 29

    // Test Case 4: Find the 20th prime number
    result = nth_prime(20);
    cout << "The 20th prime number is: " << result << endl;  // Expected output: 71

    // Test Case 5: Edge case - Find the 0th prime number (invalid case)
    result = nth_prime(0);
    cout << "The 0th prime number is: " << result << endl;  // Expected output: Undefined behavior or error

    // Test Case 6: Find the 100th prime number
    result = nth_prime(100);
    cout << "The 100th prime number is: " << result << endl;  // Expected output: 541

    return 0;
}



