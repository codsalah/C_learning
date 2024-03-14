#include<iostream>
using namespace std;

void calc(int nums[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        result += nums[i];
    }

    cout << "Sum: " << result << "\n"; // Added a semicolon here and updated the output message
}

int main()
{
    int arrayofnums[] = {10, 210, 30, 40};
    int sumsize = size(arrayofnums);

    calc(arrayofnums, sumsize);
    return 0;
}