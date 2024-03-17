#include <iostream>
using namespace std;

int main() 
{
    const int N = 200;
    int n, a[N];
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    cout << a[0] << " ";
    for(int i = 1; i < n ; i++)
    {
        if (a[i] != a[i-1])
            cout << a[i] << " ";
    }
    return 0;
}