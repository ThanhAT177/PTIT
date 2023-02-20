#include <iostream>
using namespace std;

void NP1(int n, int k) {
	int a[n + 1] = {};
	for (int i = n - k + 1; i <= n; ++i) {
		a[i] = 1;
	}
	while (1) {
		for (int i = 1; i < n; ++i) {
			cout << a[i] << ' ';
		}
		break;
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		NP1(n, k);
	}
	return 0;
}
