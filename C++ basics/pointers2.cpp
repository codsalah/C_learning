#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int nums[]{10, 20, 30, 40};
    int* ptr = &nums[0];  // you can use int* ptr = nums;
    
    cout << "first element is: \n\n";
    cout << "value with index: " << nums[0] << "\n";
    cout << "value with pointer: " << *ptr << "\n";
    cout << "address with index: " << &nums[0] << "\n";
    cout << "address with pointer: " << ptr << "\n";

    cout << "==========================\n";
    
    cout << "second element is: \n\n";
    cout << "value with index: " << nums[1] << "\n";
    cout << "value with pointer: " << *(ptr + 1) << "\n";
    cout << "address with index: " << &nums[1] << "\n";
    cout << "address with pointer: " << ptr << "\n";

    return 0;
}