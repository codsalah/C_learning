#include <iostream>
using namespace std;
int main()
{
  double x;
  cin >> x;
  int y = (int)(x);
  if((int)(x) == x)
    cout << "int " << y;
  else
    cout << "float " << y << " "<< x-y ;

}