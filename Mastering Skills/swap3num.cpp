#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3, temp;
    cin >> num1 >> num2 >> num3;
    // 4 lines
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 =temp;

    cout << num1 << " " << num2 << " "<< num3<< "\n";

}