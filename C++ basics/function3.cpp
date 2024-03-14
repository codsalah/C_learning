#include<iostream>
#include<string>
using namespace std;



void iceBox(string item)
{
    if (item == "cocacola")
    {
        cout << item << "is not healthy\n";
        
    }
    else if(item == "apple")
    {
        cout << item << "is healthy\n";
    }
    else
    {
        cout << "invalid item\n";
    }
}

void calc(int numOne, int numTwo, string operation)
{
    
    cout << "Enter fisrt number \n";
    cin >> numOne;
    cout << "Enter second number\n";
    cin  >> numTwo;
    cout << "Enter the operation\n";
    cin >> operation;
    cout << numOne << operation << numTwo << " = ";
    if (operation == "+")
    {
        cout << numOne + numTwo;
    }
    else if (operation == "-")
    {
        cout << numOne - numTwo;
    }
    else if (operation == "*")
    {
        cout << numOne * numTwo;
    }
    else if (operation == "/")
    {
        if (numTwo != 0)
        {
            cout << numOne / numTwo << "=";
        }
        else
        {
            cout << "Invalid operation: division by zero!";
        }
    }
    else
    {
        cout << "Invalid operation/number bud";
    }
}

int main()
{
    string op;
    int num1, num2;
    iceBox("Cocalcol");
    iceBox("apple");
    iceBox("coffee");
    calc(num1, num2, op);
    return 0;
}