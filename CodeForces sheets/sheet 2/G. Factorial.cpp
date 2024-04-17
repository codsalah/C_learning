#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        //take n each time 
        cin >> n;
        long long fact = 1;
        for(int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
    return 0;
}
