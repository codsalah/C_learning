#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numsOne = {10, 20, 30, 40};
    vector<int> numsTwo = {100, 200, 300, 400};
    vector<int> numsThree(4, 50); // Initialize with 50 elements, each having value 4

    for (int i = 0; i < numsOne.size(); i++)
    {
        cout << numsOne.at(i) << " ";
    }
    
    for (int i = 0; i < numsTwo.size(); i++)
    {
        cout << numsTwo.at(i) << " ";
    }
    
    numsThree.at(0) = 1000;
    
    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }
    cout << "\n=================== \n";
    cout << "num of elements is: "  << numsThree.size() << "\n";

    numsThree.push_back(1000);
    cout << "num of elements is: "  << numsThree.size() << "\n";

}