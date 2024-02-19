#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout << pow(2, 4);
    cout << "\n" << 2 * 2 * 2 * 2 << "\n";
    // cout << 11.5 % 2 << "\n"; // Error
    
    cout << fmod(11.5, 2) << "\n"; //1.5
    
    cout << ceil(9.1 )<< "\n"; // 10
    cout << floor(9.9 )<< "\n"; // 9
    cout << round(9.9 )<< "\n"; // 10
    cout << round(9.4 )<< "\n"; // 9
    cout << trunc(9.91232 )<< "\n";
    cout << trunc(9.9 )<< "\n";
    return 0;
}







