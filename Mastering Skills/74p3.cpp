#include <iostream>
using namespace std;

int main() 
{
    int fnum, lnum;
    cin >> fnum >> lnum;
    int initial_lnum = lnum; 
    // Store the initial value of lnum
    while(fnum > 0)
    {
        lnum = initial_lnum;
        while(lnum > 0)
        {
            cout << fnum << " * " << lnum << " = " << fnum * lnum << "\n";
            lnum--;
        }
        fnum--;
    }
}