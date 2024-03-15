#include <iostream>
using namespace std;

int main() 
{
    int n, m , sum;
    int cnt = 0;
    cin >> n >> m >> sum;
    for (int i =1; i <= n; ++i)
    {
        int j = sum - i;

        if (1 <= j && j <= m)
        {
            cnt++;
        }
        cout << cnt << "\n";
        return 0;
    }
}

