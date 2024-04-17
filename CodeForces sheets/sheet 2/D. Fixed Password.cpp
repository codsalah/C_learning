#include<iostream>
using namespace std;

int main()
{
  int pass = 1999;
  int trypass = 0;
  while(true)
  {
    cin >> trypass;
    if(trypass == pass)
    {
      cout << "Correct" << endl;
      break;
    }
    else
    {
      cout << "Wrong" << endl;
    }
  }
}
////
//
//
//