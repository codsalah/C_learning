#include <iostream>
#include <vector>
using namespace std;

int read_array(vector<int>& arr) {
    int len;
    cin >> len;
    arr.resize(len);
    for (int i = 0; i < len; ++i) {
        cin >> arr[i];
    }
    return len;
}

bool is_palindrome(const vector<int>& arr, int n) {
    int st = 0, en = n - 1;
    while (st < en) {
        if (arr[st] != arr[en])
            return false;
        st++, en--;
    }
    return true;
}

void test_case(const vector<int>& arr) {
    int len = arr.size();
    if (is_palindrome(arr, len)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
}

int main() {
    vector<int> test1 = {1, 2, 3, 2, 1};
    vector<int> test2 = {1, 2, 3, 4};
    vector<int> test3 = {5, 5, 5, 5, 5};
    vector<int> test4 = {1};
    vector<int> test5 = {};
    
    cout << "Test Case 1: ";
    test_case(test1);

    cout << "Test Case 2: ";
    test_case(test2);

    cout << "Test Case 3: ";
    test_case(test3);

    cout << "Test Case 4: ";
    test_case(test4);

    cout << "Test Case 5: ";
    test_case(test5);

    return 0;
}
