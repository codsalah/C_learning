#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int spaces = row -1;
    int counter = 1;
    while(counter <= row)
    {
        while(spaces > 0)
        {
            cout << " ";
            spaces--;
        }
        // cout << "*";

        cout << "*";
        counter++;
    }

}