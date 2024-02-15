#include <iostream>

using namespace std;

main()
{
    int num;
    cout << "give me your number";
    cin >> num;
    
    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
}