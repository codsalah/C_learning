#include <string>
#include <cctype>

bool is_uppercase(const std::string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (std::islower(s[i])) {
            return false;
        }
    }
    return true;
}
