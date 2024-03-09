#include<iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int result = n - (n / m) * m;

	cout << result << " " << n % m << "\n";

	return 0;
}

