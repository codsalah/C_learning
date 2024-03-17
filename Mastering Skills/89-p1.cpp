
#include<iostream>
using namespace std;


int main() {
	const int N = 200;
	int n, arr[N];

	cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int min1 = arr[0], min2 = arr[1], min3 = arr[2];
    for (int i = 3; i < n; ++i) {
        if (arr[i] < min1) {
            min3 = min2;
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min3 = min2;
            min2 = arr[i];
        } else if (arr[i] < min3 && arr[i] != min2 && arr[i] != min1) {
            min3 = arr[i];
        }
    }

    cout << min1 << " " << min2 << " " << min3 << endl;

    return 0;
}