#include <iostream>
using namespace std;
#include <array>

int main()
{
    array<int, 4> nums = {100, 200 , 300, 400};

    cout << nums[0] << "\n";    //100
    cout << nums.front() << "\n"; //100
    cout << nums[3] << "\n";  // 400
    cout << nums.back() << "\n"; // 400 last elemnt
    cout << nums.at(1) << "\n"; //200
    cout << nums.at(1) << "\n"; //4
    cout << nums.empty() << "\n"; //False
    
}