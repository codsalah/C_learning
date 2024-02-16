#include <iostream>
using namespace std;
#include <array>

int main()
{
    cout << "Hi guys\n";
    cout << "Hi\0 guys\n"; // \0 terminate the line

    char name_a[] = "salah";
    cout << name_a << "\n"; //salah\0 (null)
    cout << sizeof(name_a) << "\n";
    cout << name_a[0] << "\n";
    cout << name_a[3] << "\n";
    cout << name_a[5] << "\n";
    cout << int(name_a[5]) << "\n";

    string name_c = "salah";
    cout << name_c[0] << "\n";
    cout << name_c[3] << "\n";
    cout << name_c[5] << "\n";
    cout << int(name_c[5]) << "\n";
    
    name_c.append("hi");
    cout << name_c[6] << "\n";

    return 0;

}