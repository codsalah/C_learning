#include <iostream>

using namespace std;

int main()
{
    int number = 6;
    int guess;
    
    cout << "Guess the number: ";
    cin >> guess;

    while (guess != number)
    {
        if (guess > number)
        {
            cout << "Too big. Try again: ";
        }
        else
        {
            cout << "Too small. Try again: ";
        }
        
        cin >> guess; // Ask for another guess
    }

    cout << "Good! You guessed the number.\n";
    
    return 0;
}
