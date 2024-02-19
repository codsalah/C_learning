#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3 ,4, 6, 7, 8,9999};
    vector<int>:: iterator first = nums.begin();
    vector<int>:: iterator last = nums.end() - 1;


    cout <<  "First element is: " << *first << "\n";
    cout <<  "Last element is: " << *last << "\n";
    cout <<  "Second element is: " << first[1] << "\n";
    cout <<  "Third element is: " << first[2] << "\n";
    cout <<  "before the last element is: " << *(last - 1) << "\n";
    cout <<  "last element is: " << *last - 1 << "\n"; // this will output 9998

    advance(first, 3);
    cout <<  "First element is: " << *first << "\n";
    advance(first, -2);
    cout <<  "First element is: " << *first << "\n";
}