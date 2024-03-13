#include <iostream>
using namespace std;

int main() 
{
    int N = 0;
    int count = 0;
    int current_num = 0;
    cin >> N;
    while(count < N)
    {
        if (current_num % 3 == 0 && current_num % 4 == 0)
        {
            cout << current_num << " ";
            count++;
        }
        current_num++;
    }

}