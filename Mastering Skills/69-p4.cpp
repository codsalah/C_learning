#include <iostream>
using namespace std;

int main() 
{
    int num,x = 1;
    cin >> num;
    while(num >= x)
    {
        int count = num;
        while(x <= count)
        {
            cout << "*";
            count--;
        }
        x++;
        cout << endl;
    }    
}