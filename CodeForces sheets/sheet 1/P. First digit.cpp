#include <iostream>
#include <string>
using namespace std;

int main()
{
  int x;
  cin >> x;
  int mynum = x/1000;
  if(mynum % 2 ==0)
    cout << "EVEN";
  else
    cout << "ODD";
  return 0; 
}