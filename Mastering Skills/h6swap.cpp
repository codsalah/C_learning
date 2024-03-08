/*
Homework 6: Swapping 2 numbers!

Write a program that reads 2 variables num1 and num2
E.g. say we read num1 = 7 and num2 = 231

Target: we want swap the values of Num1 and Num2?
Swap means exchange

So Num1 takes value 231 and Num2 takes value 7

*/

#include<iostream>
using namespace std;

int main() {
	int num1, num2, temp;
	
	cin>>num1>>num2;

	// Swap operation in 3 steps using num3 as temporary storage
	temp = num2;	
	num2 = num1;		
	num1 = temp;

	cout<<num1<<" "<<num2<<endl;	

	return 0;
}
