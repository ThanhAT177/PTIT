#include <iostream>
using namespace std;

long long modulo = (long long)1e9 + 7;

long long PowerMod(int n, int k) {
	if (k == 0) {
		return 1;
	}
	long long x = PowerMod(n, k/2) % modulo;
	if (k & 1) {
		return n*(x*x % modulo) % modulo;
	}
	return x*x % modulo;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		cout << PowerMod(n, k) << '\n';
	}
	return 0;
}
