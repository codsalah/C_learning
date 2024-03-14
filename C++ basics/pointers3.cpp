#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int* ptr1; // wild pointer
    int* ptr2 = nullptr;
    cout << ptr1 << "\n"; // garbage value
    cout << ptr2 << "\n"; // 0

    int a = 100;
    int *ptr = &a;

    cout << ptr << "\n";  //memory address
    cout << *ptr << "\n"; //value using dereference operator

    

}
