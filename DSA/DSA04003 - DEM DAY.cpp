#include <iostream>

using namespace std;
long long m = 123456789;

long long PowerMod(int n, long long k) {
	if (k == 0) {
		return 1;
	}
	long long x = PowerMod(2, k/2);
	if (k & 1) {
		return n*(x*x % m) % m;
	}
	return x*x % m;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		cout << PowerMod(2, n - 1) << '\n';
	}
	return 0;
}
