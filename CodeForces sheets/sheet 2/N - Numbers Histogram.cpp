#include <iostream>
using namespace std;

int main() {
    char S;
    short N;
    cin >> S >> N;
    for(int i=1; i<=N; i++)
    {
        int procnum;
        cin >> procnum;
        for(int j=1; j<=procnum; j++)
        {
            cout << S;
        }
        cout << endl;
    }
    return 0;
}
