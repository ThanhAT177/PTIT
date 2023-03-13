#include <iostream>

using namespace std;

void Solve() {
	int n;
	cin >> n;
	int a[n];
	long long b[n + 1];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	b[0] = 0;
	for (int i = 1; i <= n; ++i) {
		b[i] = b[i - 1] + a[i - 1];
	}
	for (int i = 0; i < n; ++i) {
		if (b[i] == b[n] - b[i] - a[i]) {
			cout << i + 1 << '\n';
			return;
		}
	}
	cout << "-1\n";
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}