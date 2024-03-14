#include<iostream>
using namespace std;

int main(){
    int nums[] = {10, 20, 30, 40, 50, 20, 20, 50};


    for (int i = 0; i < 5; i++)
    {
        if (nums[i] == 20)
        {
            //skip this iteration and contiue
            continue;
        }
        cout << nums[i] << "\n";
        cout << "then\n";
    } 
    return 0;
}