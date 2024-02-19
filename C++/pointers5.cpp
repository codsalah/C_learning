#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int nums[]{10, 20, 30, 40};
    cout << nums << "\n";     // first element memory address
    cout << &nums[0] << "\n"; //first element memory address

    cout << nums[0] << "\n";  //
    cout << *nums << "\n";    //

    cout << nums[1] << "\n";  //
    cout << *nums << "\n";    //



    return 0;
}