#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30 ,40};
    vector<int>:: iterator it = nums.begin();
    auto iter = nums.begin() + 1;

    cout << "first element is: " << *it << "\n";
    cout << "first element is: " << *iter << "\n";
    cout << "first element is: " << *nums.begin() << "\n";
    
    // does not including erasing the end
    nums.erase(nums.begin(), nums.begin() + 2);     
    cout <<  "first element after delete is: " << "";
    
    cout << "first element after erasing is: " << *nums.begin() << "\n";
    return 0;
} 