/*
Write a program in C++ to calculate the series 
(1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
Sample Output:
Input the value for nth term: 5
*/

#include <iostream>
using namespace std;


int main() 
{
    int i, j, n, sum = 0, tsum; 

    cout << "\n\n Find the sum of the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n):\n";
    cout << "------------------------------------------------------------------------------------------\n";

    cout << " Input the value for nth term: ";
    cin >> n; 

    for (i = 1; i <= n; i++) 
	{
        tsum = 0; // Initializing 'tsum' to 0 for each iteration of the outer loop

        for (j = 1; j <= i; j++) // Inner loop to calculate the partial sums for each term of the series
		{
            sum += j; // Add 'j' to 'sum'
            tsum += j; // Add 'j' to 'tsum' for the current term

            cout << j; // Display the current value of 'j'

            if (j < i) // Condition to print '+' for all values of 'j' except the last one in each term
			{
                cout << "+"; // Display '+'
            }
        }

        cout << " = " << tsum << endl; // Display the calculated partial sum for the current term
    }

    // Display the total sum of the series
    cout << " The sum of the above series is: " << sum << endl;

    return 0; // Indicating successful completion of the program

}