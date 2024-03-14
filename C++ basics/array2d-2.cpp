#include <iostream>
using namespace std;
#include <array>
int main ()
{

    // int point [4] = {1, 2, 3, 4}; // C style


    array<int, 4> points = {1, 2, 3, 4};
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    cout << "element size" << points.size() <<"\n";

    points.fill(10);
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    points.fill(true);
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";
    points.fill('A');
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";

    return 0;
}