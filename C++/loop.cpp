#include <iostream>
using namespace std;

int main() {
    int num = 0;
    num++;
    cout << num << '\n'; //1
    num++;
    cout << num << '\n'; //2
    num++;
    cout << num << '\n'; //3
    num++;
    cout << num << '\n'; //4
    num++;
    cout << num << '\n'; //5

    cout << "========================" << '\n'; //5

    for(int i = 0; i < 5; i++) 
    { 
        cout << i << "\n";
    }

    int arr[4] = {100, 200, 300, 400};
    cout << arr[0] << "\n";
    cout << arr[1] << "\n";
    cout << arr[2] << "\n";
    cout << arr[3] << "\n";

    for(int index = 0; index < 4; index++) 
    {
        cout << arr[index] << "\n";
    }

        for(int index=0 ;index < 4 ;index++)
    {

        cout << arr[index] << "\n";

    }
    return 0;
}
