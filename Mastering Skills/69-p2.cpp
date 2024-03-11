#include <iostream>
using namespace std;

int main() 
{
    int num, x = 0;
    char ch;
    cin >> num >> ch;

    while(x < num)
    {
        cout << ch;
        x++;
    }
    return 0;
}