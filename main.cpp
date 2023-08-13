#include<iostream>

using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;

	if (a % b == 0) {
		cout << a;
		for (int i = 0; i < n; i++) cout << '0';
		return 0;
	}
	int rem = b - ((a % b) * (10 % b)) % b;
	rem *= (rem != b);
	if (rem > 9) {
		cout << -1;
		return 0;
	}
	cout << a;
	cout << rem;
	for (int i = 1; i < n; i++) cout << '0';
}
