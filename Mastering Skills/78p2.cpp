#include <iostream>
using namespace std;

int main() 
{
    int n, m, sum;
    cin >> n >> m >> sum;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i + j == sum)
            {
                count++;
                cout << i << " " << j << " " << "sum\n";
            }
        }
    }

    cout << count << "\n";
    return 0;
}