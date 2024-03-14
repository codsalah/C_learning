#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30 ,40};
    cout << nums.size();
    cout << nums.max_size() << "\n";
    cout << nums.capacity() << "\n";  //4
    nums.push_back(50);  //add these elements
    nums.push_back(20);
    nums.push_back(21);
    nums.push_back(22);
    cout << nums.capacity() << "\n";  //8
    cout << nums.front() << "\n";  //first element
    cout << nums.at(0) << "\n";  //first element
    cout << nums.at(nums.size() - 1) << "\n";  //last element
    nums.clear();
    cout << nums.size() << "\n";  // 0 

    if(nums.empty())
    {
        cout << "vector is empty\n"; 
    }
    else
    {
        cout << "vector is empty\n"; 
    }
    
    return 0;
}