#include<iostream>
using namespace std;

int main() 
{
    int rows = 10;

    for(int row =1 ; row <= rows ; row++)
    {
        for(int j = 1; j <= row ; j++)
            cout << "*";
        cout << "\n";
    }
}

/*
*
**
***
****
*****
******
*******
********
*********
**********
*/