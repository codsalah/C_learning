#include <iostream>
using namespace std;

int main() 
{
    int num1, x =1;
    cin >> num1;
    while (num1 >= x)
    {   
        int count = 0;
        while(count < x)
        {
            cout << "*";
            count++;
        }
        cout << endl;
        x++;
    }
}

/*

8
*
**
***
****
*****
******
*******
********

*/