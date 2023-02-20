#include <iostream>
using namespace std;

long long modulo = (int) 1e9 + 7;

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
	long long a, b;
	while (1) {
		cin >> a >> b;
		if (!a && !b) {
			break;
		}
		cout << PowerMod(a, b) << '\n';
	}
	return 0;
}
