#include <iostream>
using namespace std;

int main()
{
  int nums[4];

  nums[3] = 400; // Last Element
  nums[0] = 100; // First Element
  nums[1] = 200; // Second Element
  nums[2] = 300; // Third Element

  cout << "Element 1: " << nums[0] << "\n";
  cout << "Element 2: " << nums[1] << "\n";
  cout << "Element 3: " << nums[2] << "\n";
  cout << "Element 4: " << nums[3] << "\n";

  nums[1] = 1000; // Second Element

  cout << "Element 2: " << nums[1] << "\n";

  int anums[] = {100, 200, 300, 400, 500, 600}; // 24 / 4 = 6
  cout << "Array Elements Count Is " << sizeof(anums) / sizeof(anums[0]);

  return 0;
}
