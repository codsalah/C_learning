#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3 ,4};
    vector<int>::iterator it;

    for(it = nums.begin(); it < nums.end(); it++)
    {
        cout << *it << "\n";
    }

    cout << "==================\n";

    //ranged loop with for
    for(int val : nums)
    {
        cout << val << "\n";
    }
}
