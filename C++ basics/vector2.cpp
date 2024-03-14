#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30};
    
    // Accessing an element within the vector's range using at()
    cout << nums.at(2) << "\n";  // Output: 30
    cout << nums[3] << "\n";  // This line may cause a runtime error

    // Adding an element to the vector
    nums.push_back(40);
    
    // Accessing the newly added element
    cout << nums.at(3) << "\n";  // Output: 40
    cout << nums.size() << "\n"; 

    // Removing the last element from the vector
    nums.pop_back();
    
    // Accessing the last element after pop_back()
    cout << nums.at(2) << "\n";  // Output: 30
    cout << nums.size() << "\n"; 

    return 0;
}