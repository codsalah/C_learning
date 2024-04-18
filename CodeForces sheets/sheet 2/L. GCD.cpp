#include <iostream>
using namespace std;

int main() {
    int a, b;
    int mini = 0;
    cin >> a >> b;
    mini = min(a, b);
    for(int i = mini; i >= 1; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
