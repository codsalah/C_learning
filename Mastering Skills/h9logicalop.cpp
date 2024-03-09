#include <iostream>
using namespace std;

int main() {
    int nb, ng, nt;

    cout << "Enter the value of nb: ";
    cin >> nb;
    cout << "Enter the value of ng: ";
    cin >> ng;
    cout << "Enter the value of nt: ";
    cin >> nt;

    //● nb greater than 25
    cout << (nb > 25) << endl;
    //● ng less than or equal to 30
    cout << (ng <= 30) << endl;
    //● nb > 20 and nt > 2 or ng > 30 and nt > 4
    cout << ((nb > 20 && nt > 2) || (ng > 30 && nt > 4)) << endl;
    //● Either nb < 60 or ng < 70
    cout << ((nb < 60) || (ng < 70)) << endl;
    //● Neither nb >= 60 nor ng >= 70
    cout << (!(nb >= 60) && !(ng >= 70)) << endl;
    //● nb is 10 more students than ng
    cout << (nb == ng + 10) << endl;
    //● Difference between nb and ng is more than 10 or nt > 5
    cout << ((nb - ng > 10) || (nt > 5)) << endl;
    //● Either nb is 10 more students than ng or ng is 15 more students than nb
    cout << ((nb == ng + 10) || (ng == nb + 15)) << endl;

    return 0;
}