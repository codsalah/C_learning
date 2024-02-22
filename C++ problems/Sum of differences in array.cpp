#include <vector>
#include <algorithm>

using namespace std;

int sumOfDifferences(const std::vector<int>& arr) {
    int result = 0;
    
    if (arr.size() <= 1) {
        return result;
    }
    
    vector<int> sortedArr = arr;
    sort(sortedArr.rbegin(), sortedArr.rend());
  
    for (int i = 0; i < sortedArr.size() - 1; i++) {
        result += sortedArr[i] - sortedArr[i + 1];
    }
    
    return result;
}
