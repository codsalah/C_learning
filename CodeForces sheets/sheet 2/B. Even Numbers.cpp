#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  if (N == 1)
    cout << -1;
  else
  {
  for(int i = 2; N >= i;i+=2)
  {
    cout << i<< endl;
  } 
  }
  return 0;
}