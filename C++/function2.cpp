#include<iostream>
using namespace std;

void sayhello(string msg, string name, int age = 10) // parameters
{
    cout << msg << "" << name << ".\n";
    cout << name << "\'s age is : " << age << "\n";
}


int main(){
    sayhello("what is that ","Salah", 20);  //arguemnts
    sayhello("hello ", "salah");  //arguemnts
    sayhello("is that ","Salah");  //arguemnts
    sayhello("do you love  ","Salah");  //arguemnts
    cout << "hi salah";
}