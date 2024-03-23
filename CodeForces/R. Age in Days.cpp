#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cout << (n/365) << " years" << endl;
  n = n%365;
  cout << (n/30) << " months" << endl;
  n = n%30;
  cout << n << " days" << endl;

return 0;

  
}