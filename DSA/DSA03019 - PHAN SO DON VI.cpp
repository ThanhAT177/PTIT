#include <iostream>

using namespace std;

void EgyptianFraction(long long a, long long b) {
	if (a == 0 && b == 0) {
		return;
	}
	if (b % a == 0) {
		cout << "1/" << b/a;
		return;
	}
	if (a % b == 0) {
		cout << "1/" << a/b;
		return;
	}
	if (a > b) {
		cout << a/b << " + ";
		EgyptianFraction(a % b, b);
	}
	long long x = b/a + 1;
	cout << "1/" << x << " + ";
	EgyptianFraction(a*x - b, b*x);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		long long a, b;
		cin >> a >> b;
		EgyptianFraction(a, b);
		cout << '\n';
	}
	return 0;
}