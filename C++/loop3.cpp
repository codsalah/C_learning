#include <iostream>
using namespace std;

int main()
{

    int nums[] = {100, 200, 300, 400, 500, 600};
    int numcount = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < numcount; i = i + 2)
    {
        cout << nums[i] << "\n";
    }

    for (int i = 0; i < numcount; i++)
    {
        cout << nums[i] << "\n";
        i++;
    }

    for (int i = numcount; i > 0; i--)
    {
        cout << nums[i] << "\n";
    }

    for (int i = numcount; i > 1; i--)
    {
        cout << nums[i] << "\n";
    }

    return 0;
}