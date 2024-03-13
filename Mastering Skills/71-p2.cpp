#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    while(N >= 0)
    {
        if(N % 8 == 0) 
            cout << N << " ";

        else if ((N % 3 == 0) && (N % 4 == 0))
            cout << N << " ";
        N--;
    }
    return 0;
}
