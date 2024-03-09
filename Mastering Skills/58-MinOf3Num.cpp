#include<iostream>
using namespace std;

int main() {

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int answer = num1;
    if (answer > num2 )
        answer = num2;
    if (num2 > num3)
        answer = num3;
    cout << "ans is : "<< answer; 
    return 0;   
}
