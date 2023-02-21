#include <iostream>
using namespace std;

long long modulo = (int) 1e9 + 7;

long long Reverse(long long x) {
	long long ans = 0;
	while (x) {
		ans = ans*10 + x % 10;
		x /= 10;
	}
	return ans;
}

long long PowerMod(long long n, long long k) {
	if (k == 0) {
		return 1;
	}
	long long x = PowerMod(n, k/2);
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
		long long n;
		cin >> n;
		long long r = Reverse(n);
		cout << PowerMod(n, r) << '\n';
	}
	return 0;
}
