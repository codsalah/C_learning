#include <vector>

using namespace std;
std::vector<int> MonkeyCount(int n) {
  // your code here
  vector<int> monkeys;
  for(int i = 1; i <= n; i++)
    {
      monkeys.push_back(i);
    }
  return monkeys;
}