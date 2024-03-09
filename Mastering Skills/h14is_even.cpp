/*
Problem #1: Is even?
● The following code reads an integer and computes 
a boolean if the number is even in 3 different ways. 
● Fill in the is_even to solve the problem in 3 ways as 
following
● Using only %2
● Using only /2
● Using only %10
*/

#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool is_even1 = (num % 2 == 0);
    cout << is_even1 << endl;
    double by2 = (double) num / 2.0;
    bool by2 = by2 - (int) by2;
    bool is_even2 = by2 == 0;

    cout << is_even2 ;
    int last_digit = num % 10;
	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
}


