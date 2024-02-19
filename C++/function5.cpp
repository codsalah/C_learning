#include <iostream>

using namespace std;


// void calc(int n1, int n2)
// {
//     cout << n1 + n2 << "\n";
// }


int calc(int n1, int n2)
{
    return n1 + n2;
}


int main()
{
    // calc(10, 20);
    int result = calc(10, 20);
    cout << result + 20 << "\n";

    return 0;
}