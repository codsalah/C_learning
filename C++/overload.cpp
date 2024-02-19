#include <iostream>
#include <cmath>

using namespace std;

void print(int a, int b){
    cout << "num1 is: "  << a << "\n";
    cout << "num2 is: "  << b << "\n";
}

void print(int a, int b, int c){
    cout << "num1 is: "  << a << "\n";
    cout << "num2 is: "  << b << "\n";
}


void print(string a, string b)
{
    cout << "num1 is: "  << a << "\n";
    cout << "num1 is: "  << b << "\n";

}
int main()
{
    print(10, 20,30)
    print("salah", "help")
    return 0;
}