#include <iostream>
using namespace std;

void set_powers(int arr[], int len = 5, int m = 2) {
    arr[0] = 1;
    
    // Fill the rest of the array with powers of m
    for (int i = 1; i < len; ++i) {
        arr[i] = arr[i - 1] * m;  // Each element is the previous one multiplied by m
    }
}

int main() {
    int arr[100];  // Declare an array to store the powers
    int len, m;
    
    // Take input for the length of the array and the base value m
    cin >> len >> m;
    
    // Call the set_powers function to fill the array with powers of m
    set_powers(arr, len, m);
    
    // Output the array values
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << "--";  // Print each power in the array
    }
    
    return 0;
}
