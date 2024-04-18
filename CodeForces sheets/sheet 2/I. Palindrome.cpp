
#include<iostream>
using namespace std;
int main ()
{
    int s,n=0 ,t=10 ,  reverse_number=0;
    cin>>n;
    t=n;

    while (n > 0)
    {
        s=n%10;
        reverse_number= s + reverse_number*10;
        n=n/10;
    }

    if (t == reverse_number )
    {
        cout<<reverse_number<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<reverse_number<<endl;
        cout<<"NO"<<endl;
    }

    return 0;
}