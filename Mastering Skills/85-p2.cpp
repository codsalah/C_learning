#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int nums[200];
    for(int i = 0; i < n; ++i)
        cin >> nums[i];

    int max_val = -1, max_repeat = -1;
    for (int i = 0; i < n ; ++i)
    {
        int repeat = 0;
        for(int j = 0; j < n; j++)
            repeat += nums[i] == nums[j];

        if (max_repeat == -1 || max_repeat < repeat)
            max_repeat = repeat, max_val = nums[i];
    }
    cout << max_val << " repeated " << max_repeat << " times";    
    return 0;
}
