#include <vector>
using namespace std;

int min(vector<int> list)
{
    int mini = list[0];
    for(int i = 0; i < list.size(); i++)
    {
        if(list[i] < mini)
        {
            mini = list[i];
        }
    }
    return mini;
}
  
  
int max(vector<int> list)
{
    int maxi = list[0];
    for(int i = 0; i < list.size(); i++)
    {
        if(list[i] > maxi)
        {
            maxi = list[i];
        }
    }
    return maxi;
}

