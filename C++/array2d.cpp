#include <iostream>
using namespace std;

int main (){


    const int rows = 3;
    const int columns = 3;

    // Good Practice
    int array2d[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << array2d[1][2] << "\n";  //6
    cout << array2d[2][0] << "\n";  //7
    cout << array2d[2][2] << "\n";  //9


    // // Bad Practice
    // int array2dd[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // cout << array2dd[1][2] << "\n";  //6
    // cout << array2dd[2][0] << "\n";  //7
    // cout << array2dd[2][2] << "\n";  //9



}