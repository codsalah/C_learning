#include <string>
using namespace std;

int get_age(const std::string& she_said) {
    
    return she_said[0] - '0';
}


/*
The digits '0' to '9' are represented consecutively in the ASCII table with values 48 to 57
For example:

'0' - '0' = 48 - 48 = 0
'1' - '0' = 49 - 48 = 1
'2' - '0' = 50 - 48 = 2
...
'9' - '0' = 57 - 48 = 9
*/