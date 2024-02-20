#include <vector>
int grow(std::vector<int> nums) {
  
  // your code here
  int result = 1;
  for(int i = 0; i < nums.size(); i++)
    {
    result *= nums[i];
  }
  return result;
}