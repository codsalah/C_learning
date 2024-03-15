/*
Write a program in C++ to display n terms of 
natural numbers and their sum.
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th terms are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28
*/

#include<iostream>
using namespace std;

int main() 
{
    int num , sum = 0;
    int i;
    cin >> num;
    for(int i = 1; i <= num ; i++)
    {
        sum = sum + i;
    }
    cout << "\n The sum is of first " << num << " is: "  << sum << endl;
}