#include <iostream>
#include <string> 
using namespace std;

int menu() {
    int choice = -1;
    while (choice == -1) {
        cout << "1. Add 2 nums\n";
        cout << "2. Subtract 2 nums\n";
        cout << "3. Multiply 2 nums\n";
        cout << "4. Divide 2 nums\n";
        cout << "5. Exit\n";
        cout << "Enter your menu choice: ";
        cin >> choice;
        if (!(1 <= choice && choice <= 5)) {
            cout << "Invalid choice. Try again.\n";
            choice = -1;
        }
    }
    return choice;
}

void read2Nums(double &a, double &b) {
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    while(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter 2 numbers: ";
        cin >> a >> b;
    }
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        choice = menu();
        if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }
        read2Nums(num1, num2);
        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }

    return 0;
}
