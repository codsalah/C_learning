#include <string>
using namespace std;

std::string multi_table(int num) {
    string result = "";
    for (int i = 1; i <= 10; i++) {
        result += to_string(i) + " * " + to_string(num) + " = " + to_string(i * num);
        if (i < 10) {
            result += "\n"; 
        }
    }
    return result;
}