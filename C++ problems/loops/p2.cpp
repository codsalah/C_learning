#include<iostream>
using namespace std;

int main() 
{
    int total_rows;
    cin >> total_rows;
    int spaces = total_rows - 1; 
    for(int row = 1 ;row <= total_rows ;row++)
    {   
        for(int s = 1; s <=total_rows - row; s++)
            cout << " ";
        for(int x = 1; x <= row; x++)
            cout << "X"; 

        cout << "\n";
    }
}

/*
7
      X
     XX
    XXX
   XXXX
  XXXXX
 XXXXXX
XXXXXXX

*/