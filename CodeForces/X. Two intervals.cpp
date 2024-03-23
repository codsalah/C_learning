#include <iostream>
using namespace std;

int main() {
    int r1, l1, r2, l2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Check for intersection
    if (r1 >= l2 && r2 >= l1) {
        // Calculate boundaries of intersection
        int left = max(l1, l2);
        int right = min(r1, r2);
        
        // Print boundaries of intersection
        cout << left << " " << right;
    } else {
        // No intersection
        cout << "-1";
    }

    return 0;
}
