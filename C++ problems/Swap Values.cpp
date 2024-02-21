#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  int tempvalue = values.first;
  values.first = values.second;
  values.second = tempvalue;
  return values;
}