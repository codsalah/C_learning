#include <iostream>
using namespace std;

int main() 
{
    int n = 10;
    int a = 0, b = 1;
    cout << a <<  " " << b << " ";
    // the idea is that you need smth to hold the sum
    // and sumth to point on the last element
    for(int i = 2 ;i < n ;++i)
    {
        int sum =a+b; // asnwer of last two elements
        a = b;
        b = sum;    // making a single shift step
        cout << sum << " ";
    }
}