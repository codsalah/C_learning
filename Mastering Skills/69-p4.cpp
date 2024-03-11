#include <iostream>
using namespace std;

int main() 
{
    int row,x = 1;
    cin >> row;
    while(row >= x)
    {
        int count = row;
        while(x <= count)
        {
            cout << "*";
            count--;
        }
        x++;
        cout << endl;
    }    
}