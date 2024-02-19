#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int num = 100;
    int* ptr = &num; // & reference operator

    cout << "Value                     : " << num << "\n";
    cout << "address reference operator: " << &num << "\n";
    cout << "address using pointer     : " << ptr << "\n";
    cout << "value dereference operator: " << *ptr << "\n";

    num = 200;

    cout << "Value                     : " << num << "\n";
    cout << "address reference operator: " << &num << "\n";
    cout << "address using pointer     : " << ptr << "\n";
    cout << "value dereference operator: " << *ptr << "\n";

    return 0;
}