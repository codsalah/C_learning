#include <vector>
#include <string>
#include <algorithm>
using namespace std;

std::string twoSort(std::vector<std::string> s)
{
  sort(s.begin(), s.end());
  string result = s.at(0);
  for(int i = 1; i < result.size(); i+=4)
    {
      result.insert(i, "***");
    }
    return result;
}