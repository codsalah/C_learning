#include <iostream>
using namespace std;

int main() 
{
    int i = 0;
    while(i < 5)
    {
        cout << i << "\n";
        if(i == 3)
        {
            cout << "break here!\n";
            break;
        }
        
            i++;
    }
}