#include<iostream>
using namespace std;

int main()
{
    // n is the number of elements
    // x is the elements values
    // occurence it the array 
    int n, x, occurence[10] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            occurence[0]++;
        
        while (x){      // iterate number of x times 
            int digit = x% 10; //
            occurence[digit]++;
            x /= 10;     //eliminate the rightmost digit
        }

    } 
    for (int i = 0; i <= 9; i++)
    {
        cout << i << " " << occurence[i] << endl;
    }
}