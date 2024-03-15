#include <iostream>
using namespace std;

int main() 
{
    //print special average 
    int N; // we have n numbers
    cin >> N;
    //keep in mind which position is even 
    //and which is odd
    double even_sum = 0, odd_sum = 0;
    double even_count = 0, odd_count = 0;

    int count = 1;
    while(count <= N)
    {
        double value;
        cin >> value;
        if (count % 2 == 0) //for even postions
            even_sum += value, even_count++;
        else                //for odd postions
            odd_sum += value, odd_count++;
        count++;
    }
    cout << odd_sum / odd_count << " " << even_sum /even_count << "\n";
    return 0;
}