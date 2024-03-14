#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    cout << "A\n";
    cout << tolower('A') << "\n";
    cout << max(10, 20) << "\n";
    cout << min ('a', 'c') << "\n";
    cout << int('a') << "\n";
    cout << max({10, 50, 20, -80}) << "\n";
    cout << min({10, 50, 20, -80}) << "\n";

    int nums[] = {10, 20, 30, -30};
    int numSize = size(nums);
    int checkMinNum = 0;

    for (int i = 0; i < numSize ; i++)
    {
        if (nums[i] < checkMinNum)
        {
            checkMinNum = nums[i];
        }
    }

    cout << checkMinNum << "\n";

    cout << "==============";

    int numsTwo[] = {10 ,20 ,30, 30, 40, 10, 40, 40};
    int numsTwoSize = size(numsTwo);
    int counter = 0;
    int choosenNum = 10;

    for (i =0; i < numsTwoSize ; i++ )
    {
        if (numsTwo[i] == choosenNum)
        {
            counter++;
        }
    }


    return 0;
}
