#include <iostream>
#include <string>
using namespace std;

int main()
{
  char x;
  cin >> x;

  if(x >= 'A' && x <='Z')
  {
    cout << (char)(x+32);
  }
  else
  {
    cout << (char)(x-32);
  }
  return 0;
}