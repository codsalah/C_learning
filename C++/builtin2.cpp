#include <iostream>
#include <cctype>

using namespace std;
int main()
{
    cout << "A\n";
    cout << tolower('A');
    cout << char(tolower('A')) << "\n";
    cout << char(97) << "\n";
    cout << "===============\n"; 
    cout << "b\n";
    cout << toupper('b');
    cout << char(toupper('b')) << "\n";
    cout << char(97) << "\n";
    cout << "===============\n"; 

    string nameOne = "SaLaH";
    int nameOneSize = size(nameOne);

    // for (int i =0; i <= nameOneSize; i++)
    // {
    //     // cout << nameOne[i] << "\n";
    //     nameOne[i] = char(toupper(nameOne[i]));
        
    //     return nameOne[i];
    // }

    for (int i =0; i <nameOneSize; i++)
    {
        if(isupper(nameOne[i]))
        {
            cout << char(toupper(nameOne[i])) <<"\n";
        }
        else if(islower(nameOne[i]))
        {
            cout << char(tolower(nameOne[i])) <<"\n";
        }

    }

    
    
    cout << "=============\n";

    for(int i =0 ; i < nameOneSize ;i++)
    {
        if(i =0)
        {
        cout << char(toupper(nameOne[i])) <<"\n"; 
        }
        else
        {
            cout << char(toupper(nameOne[i])) <<"\n";
        }
    }
    // cout << nameOne[i] << "\n";
    // cout << int(nameOne[i]) << "\n";
    return 0;

}