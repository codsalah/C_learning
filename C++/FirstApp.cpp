#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "==============\n";
    cout << "Enter Your Age\n";
    cout << "==============\n";

    cin >> age;

    // cout << "You entered: " << age << " years old." << endl;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;       
    int age_in_minutes = age_in_hours * 60;

    cout << "age in days: " <<  age_in_days << " days\n";
    cout << "age in hours: " <<  age_in_days << " hours\n";
    cout << "age in min: " <<  age_in_days << " min\n";
    
    return 0;
}