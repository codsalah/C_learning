#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin >>t;
    for(int i =1 ;i<=t ;i++ )
    {
        //take n each time 
        cin >> n;
        long long fact = 1;
        for(int i=1;i<=n ; i++)
        {
            fact = fact*i;
        }
        cout << fact << endl;
    }
    return 0;
}