#include <string>

using namespace std;
std::string sum_str(const std::string& a, const std::string& b) {
    
    return to_string(stoi(a == "" ? "0" : a) + stoi(b == "" ? "0" : b));
}
