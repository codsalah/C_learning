#include <iostream>
using namespace std;

int main() 
{
    int n, m , w;

    cin >> n >> m >> w;
    int count = 0;
    for(int i = 1; i <= n; ++i)
        for(int j = i; j <= m; ++j)
            for(int k = 1; k <= w; ++k)
                if( i + j <= k)
                    count++;
    cout << count << "\n";
    return 0;
}