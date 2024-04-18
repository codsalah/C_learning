
#include<iostream>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    for(int i =2; i<= N; i++)
    {
        bool ch = 0;
        for(int j =2; j <i; j++)
        {
            if(i % j == 0)
                ch = 1;
        }
        if (ch == 0)
            //prime number
            cout << i << " ";
    }
}
