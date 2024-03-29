#include<iostream>
using namespace std;

int main()
{
  int N;
  int maxi = 0;
  cin >> N;
  int num;
  for(int i = 0 ; N > i; i++)
  {
    cin >> num;
    if(num > maxi)
      maxi = num;
  }
  cout << maxi << endl;
}
//