#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double Pi =  3.141592653;
    double r;
    cin >> r;
    cout <<  fixed << setprecision(9) <<Pi * r * r << endl;
}