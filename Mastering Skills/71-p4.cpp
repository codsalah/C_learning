#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int start = 3;
    while(n)
    {
        if(start % 4 != 0)
            --n, cout << start << " ";
        start += 3;
    }
}