#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int result = 0;
  for (int i =0; i < a.size() ;i++)
    {
      result = result + a.at(i);
    } 
  for (int i =0; i < b.size() ;i++)
    {
      result = result + b.at(i);
    } 
  
  return result ; 
}