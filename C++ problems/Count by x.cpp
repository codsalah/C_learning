#include <vector>
using namespace std;

std::vector<int> countBy(int x,int n){
  vector<int> result;
  for(int i = 1 ; i <= n ; i++)
    {
      result.push_back(x * i);
    }
  return result;
}