#include <iostream>
using namespace std;

int main()
{
  int a, b , c;
  cin >> a >> b >> c;
  if(a >= b && a >=c)
  {
    if(b >= c)
      cout << c <<"\n"<< b<<"\n" <<a<<"\n";
    else 
      cout<< b <<"\n"<< c<<"\n" <<a<<"\n";
  }
  else if(b >= a && b >=c)
  {
    if(a >= c)
      cout << c <<"\n"<< a<<"\n" << b<<"\n";
    else 
      cout << a <<"\n"<< c<<"\n" << b<<"\n";
  }
  else 
  {
    if(a >= b)
      cout <<b<<"\n"<< a<<"\n"<<c<<"\n" ;
    else 
      cout<<a <<"\n"<< b<<"\n" <<c<<"\n";
  }
  cout << "\n" <<a <<"\n"<< b <<"\n"<< c<<"\n";
  return 0;

}