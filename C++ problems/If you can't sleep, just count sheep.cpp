#include <string>

using namespace std;

std::string countSheep(int number) {
    string result = "";
  
    for (int i = 1; i <= number; i++) {
      
        result += to_string(i) + " sheep...";
    }
    return result;
}
