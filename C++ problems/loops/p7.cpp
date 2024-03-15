/*
Write a program in C++ to find the sum of the digits of a given number.
Sample Output:
Input a number: 1234
The sum of digits of 1234 is: 10
*/

#include<iostream>
using namespace std;

int main() {
    int num1,temp;
    int storenum, sum =0;
    cin >> num1;
    temp = num1;
    while(num1 > 0)
    {
        storenum = num1 % 10;  //extract the rightmost num
        num1 = num1/10;  // divide the num by ten to remove rightmost digit
        sum = storenum + sum;
    }

    cout << " The sum of digits of " << temp << " is: " << sum << endl;

}