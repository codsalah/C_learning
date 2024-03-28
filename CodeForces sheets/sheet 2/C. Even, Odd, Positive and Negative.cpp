#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N ;
  int cnteven = 0, cntodd = 0, cntpos = 0, cntneg = 0;
  for(int c=0; c < N; c++)
  {
    int i;
    cin >> i;
    if(i % 2 == 0)
      cnteven++;
    else
      cntodd++;
    if(i > 0)  
      cntpos++;
    else if(i < 0)
      cntneg++;
  }
  cout << "Even: " << cnteven << endl;
  cout << "Odd: " << cntodd<< endl;
  cout << "Positive: " << cntpos<< endl;
  cout << "Negative: " << cntneg<< endl;
  return 0;
}