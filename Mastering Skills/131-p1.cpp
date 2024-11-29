#include <iostream>
#include <string> 
using namespace std;

string reverse_str(const string &str) {
    string ret = str;  
    int st = 0, en = (int)str.size() - 1;

    while (st < en) {
        swap(ret[st], ret[en]);  
        st++;
        en--;
    }
    return ret;
}

int main() {
    cout << reverse_str("") << '\n';
    cout << reverse_str("iaabb") << '\n';
    cout << reverse_str("abcd") << '\n';
    cout << reverse_str("wowwww") << '\n';
}
