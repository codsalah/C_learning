#include<iostream>
using namespace std;

int main() {
    double s1grade, s2grade;
    int s1id, s2id;
    string s1name, s2name;
    cout << "What is student 1 name: ";
    cin >> s1name;
    cout << "\nHis id: ";
    cin >> s1id;
    cout << "\nHis math exam grad ";
    cin >> s1grade;

    cout << "\nWhat is student 2 name: ";
    cin >> s2name;
    cout << "\nHis id: ";
    cin >> s2id;
    cout << "\nHis math exam grad ";
    cin >> s2grade;
    cout << "\nStudent grade in math\n";
    cout << s1name <<" (with id " << s1id<< ") got grade: " << s1grade << "\n" ;    
    cout << s2name <<" (with id " << s2id<< ") got grade: " << s2grade << "\n" ;
    cout << "average grade is " << (s1grade + s2grade) / 2;    
}