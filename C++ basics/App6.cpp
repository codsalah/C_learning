#include <iostream>
using namespace std;

int main() {
    int points;
    cin >> points;
    if (points > 0 && points < 500) 
    {
        cout << "Your points are: " << points << "\nNot bad.";
    } 
    else if (points >= 500 && points < 1000) 
    {
        cout << "Your points are: " << points << "\nGood.";
    } 
    else if (points >= 1000 && points < 5000) 
    {
        cout << "Your points are: " << points << "\nWow.";
    } 
    else 
    {
        cout << "Invalid input.";
    }
    return 0;
}