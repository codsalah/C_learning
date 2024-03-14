#include <iostream>
using namespace std;

int main() 
{   
    int n, nums[200];
    for(int i=0 ; i < n; i++)
        cin >> nums[i];
    
    for(int i =0; i < n/2 ; ++i)
    {
        int last = n - i - 1;
        int temp = nums[i];
        nums[i] = nums[last];
        nums[last] = temp;
    }

    for(int i = 0; i < n ;++i)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
