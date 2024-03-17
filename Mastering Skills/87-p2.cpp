#include<iostream>
using namespace std;

int main()
{
    const int N = 200;
    int n, a[N], i, q;
    cin >> n; // Read the size of the array
    // Read 'n' numbers into the array
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> q; // Read the number of queries
    // Loop through each query
    while(q--) {
        int num;
        cin >> num; // Read the number to find
        int pos = -1; // Initialize position to -1 (not found)
        // Search the array in reverse order
        for(int i = n - 1; i >= 0; --i)
        {
            if (a[i] == num){
                pos = i; // Update position if number is found
                break;
            }
        }
        cout << pos << "\n"; // Print the position
    }
    return 0;
}