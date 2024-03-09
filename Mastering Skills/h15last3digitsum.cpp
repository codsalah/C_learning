/*

Problem #2: Last 3 digits sum
● Write a program that reads an integer and prints the sum of its last 3 digits.
● Inputs ⇒ Outputs examples
○ 15 ⇒ 6
○ 125 ⇒ 8
○ 1000 ⇒ 0
○ 1001 ⇒ 1
○ 1234 ⇒ 9
○ 99999 ⇒ 27

*/

#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int lastThreeDigits = (num % 1000) % 1000;
    cout << "here is your num "<<lastThreeDigits;
}