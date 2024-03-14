#include<iostream>
using namespace std;
/*
to remember ->-> 
• Loop
---- Compare
---- For Specific Number Of Loops
While Loop As- Long Condition -Is -True
---- Do While Always Execute Once
•Create Three Apps
---- Count Positive & Even Numbers Only
---- Guess The Number
---- Reversed Elements From User
*/
int main()
{
    // // Count Positive & even numbers only
    // int result = 0;
    // int nums[] = {-10,-10, -20, -10, 10, 10, 20, 20  };
    // int numsSize = size(nums);

    // for (int i=0; i < numsSize ; i++)
    // {
    //     if(nums[i] > 0 && nums[i] % 2 == 0)
    //     {
    //         result += nums[i];
    //     }

    // }
    // cout << "Result Is: " << result << "\n";

    // // guess the number 
    // int guessNum = 7;
    // int guessTries = 0;
    // int yourTry ; 
    // cout << "Guess the num: between 1 & 20\n ";
    // while(true)
    // {
    //     cin >> yourTry;
    //     if (yourTry == guessNum)
    //     {
    //         cout << "correct guess! ";
    //         break;
    //     } 
    //     else
    //     {
    //         cout << "failed guess! ";
    //         guessTries++;   
    //     }
    //     if (guessTries == 3)
    //     {
    //         cout << "you failed the number was " << guessNum << " \n";
    //         break;
    //     }
    // }


//---- Reversed Elements From User

    int vals[5];
    int input;
    cout << " type numbers to reverse\n";

    int sizeval = size(vals);
    cout << "numbers should be size of " <<sizeval << "\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> input;
        vals[i] = input;    
    }
    cout << "\n============================\n";

    for(int i = sizeval -1 ; i > -1; i--)
    {
        cout << vals[i] << "\n";
    }

    return 0;

}