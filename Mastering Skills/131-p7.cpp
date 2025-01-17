#include <iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos) {
    if (pos + pattern.size() > input.size())
        return false;
    
    for (int i = 0; i < (int) pattern.size(); ++i) {
        if (pattern[i] != input[i + pos])
            return false;
    }
    return true;
}

string replace_str(string input, string pattern, string to) {
    string res = "";
    for (int pos = 0; pos < (int) input.size(); ++pos) {
        if (starts_with(input, pattern, pos)) {
            res += to;
            pos += (int) pattern.size() - 1;
        } else {
            res += input[pos];
        }
    }
    return res;
}

int main() {
    string input = "hello world, hello everyone";
    string pattern = "hello";
    string to = "Noooooooo";

    string result = replace_str(input, pattern, to);

    cout << result << endl;

    return 0;
}
