#include <iostream>
#include <cctype>

using namespace std;

int add(int num)
{
    if(num == 0)
    {
        return 0;
    }
    cout << num << "\n";
    cout << "====================\n";
    return num + add(num - 1);
}

int main()
{
    cout << add(5);
    return 0;
}