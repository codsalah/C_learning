#include <iostream>
#include <string>
using namespace std;
/*
[0,25], (25,50], (50,75], (75,100]
Note:
if X belongs to any of the above intervals print "Interval " followed by the interval.
if X does not belong to any of the above intervals print "Out of Intervals".
The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol ']' represents smaller than or equal.
*/
int main()
{
    double x;
    cin >> x;
    if (0 <= x && x <= 100) {
        if (x >= 0 && x <= 25)
            cout << "Interval [0,25]";
        else if (x > 25 && x <= 50)
            cout << "Interval (25,50]";
        else if (x > 50 && x <= 75)
            cout << "Interval (50,75]";
        else if (x > 75 && x <= 100)
            cout << "Interval (75,100]";
    } else {
        cout << "Out of Intervals";
    }
    return 0;
}