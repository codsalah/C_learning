#include <iostream>
using namespace std;
#include <array>

int main()
{

    char fname[] = "salah";
    char lname[] = "mohamed";

    cout << fname << lname << "\n";
    cout << strcat(fname, lname) << "\n";

    string firname = "salah";
    string lasname = "moahmed";
    

    cout << firname + lasname << "\n";
    cout << firname.append(lasname) << "\n";

    return 0;
}