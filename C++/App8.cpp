#include <iostream>
using namespace std;
#include <array>

int main()
{
    int points = 0;
    int answers[3] = {0};
    cout << "type the missing number in sequences";
    cout << "sequence1";
    cout << "1 | 5 | 10 | 16 | ?? \n";
    cin >> answers[0];

    cout << "sequence2";
    cout << "2 | 4 | 8 | 16 | ?? \n";
    cin >> answers[1];

    cout << "sequence3";
    cout << "1 | 1 | 2 | 3 | ?? \n";
    cin >> answers[2];


    int sequences[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}
    };


    for (int i = 0; i < 3; ++i) {
        if (answers[i] == sequences[i][4]) {
            points++;
        }
    }

    cout << "your points is " << points << " out of 3\n";
    return 0;
}