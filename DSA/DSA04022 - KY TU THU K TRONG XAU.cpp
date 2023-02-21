#include <iostream>
#include <vector>

using namespace std;

long long LastK(int n, long k) {
	long long x = 1ll << (n - 1);
	
	if (k == x) {
		return n;
	}
	if (k > x) {
		return LastK(n - 1, k - x);
	}
	return LastK(n - 1, k);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		cout << (char)('@' +LastK(n, k)) << '\n';
	}
	return 0;
}
