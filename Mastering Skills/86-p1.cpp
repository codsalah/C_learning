
#include<iostream>
using namespace std;


int main() {
	const int N = 200;
	int n, a[N];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool increasing = 1; 
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			increasing = 0;
			break;
		}
	}
	if (increasing) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}
