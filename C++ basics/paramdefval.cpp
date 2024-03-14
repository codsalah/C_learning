#include<iostream>
using namespace std;

void details(string msg = "Hello", string name = "Unknown")
{
    cout << msg << " " << name << "\n";
}


int main()
{
    details("hi", "Ahmed");
    details("hi vip", "salah");
    details();
    details();
    details();
    details();
    //note default params should be the end of the params
    return 0;
}