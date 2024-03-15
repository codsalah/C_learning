/*
Write a program in C++ to find the sum of the first 10 
natural numbers.
Sample Output:
Find the first 10 natural numbers:
*/

#include<iostream>
using namespace std;

int main() 
{
    int num = 10, sum = 0;
    int i;
    for(int i = 1; i <= num ; i++)
    {
        sum = sum + i;
    }
    cout << "\n The sum is: " << sum << endl;
}