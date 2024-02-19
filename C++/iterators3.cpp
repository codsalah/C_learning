#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1, 33, 3 ,-90, -26, -70, 120, 99};

    int val = 2; // the number im searching for
    int countnTimes = count(nums.begin(), nums.end(), val);

    cout << "number " << val << " found " << countnTimes ;

    cout << "\n=================\n";
    
    for (int n : nums)
    {
        cout << n << "\n"; 
    }

    cout << "\n=================\n";

    sort(nums.begin(), nums.end());

    for (int n : nums)
    {
        cout << n << "\n"; 
    }  

    cout << "\n=================\n";
    reverse(nums.begin(), nums.end());

    for (int n : nums)
    {
        cout << n << "\n"; 
    }  
    return 0;
}