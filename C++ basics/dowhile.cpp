#include<iostream>
using namespace std;


int main()
{
    int index = 1;
    int index2 = 1;

    while(index2 < 6)
    {
        cout << index2 << "\n";
        index2++;
    }

    // do first 
    do
    {
        cout << index << "\n";
        index++;
        
    } while (index < 6);
    
    return 0;
}