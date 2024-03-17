#include<iostream>
using namespace std;

// find mosted repeated number
// idea of shifting values
int main()
{
    int n;
    cin >> n;
    const int MAX = 270 + 500 + 1;
    int frequency[MAX] = {0}; //inialize with zeros

    //iterate over the values
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        value += 500;        // shift all to be positive
        frequency[value]++;
    }
    
    int mx_pos = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (frequency[mx_pos] < frequency[i])
            mx_pos = i;
    }
    //shift it back
    cout << mx_pos - 500 << " has repeated " << frequency[mx_pos] << " times ";
}