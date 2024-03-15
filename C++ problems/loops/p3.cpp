#include<iostream>
using namespace std;

int main() 
{
    int total_rows;
    cin >> total_rows;
    int spaces = total_rows - 1; 
    for(int row = 1 ;row <= total_rows ;row++)
    {   
        for(int col = 1; col <= total_rows; col++)
            if(row + col >= total_rows + 1)
                cout << "X";
            else
                cout << " ";
        cout << "\n";
    }
}
