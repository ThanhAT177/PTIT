#include <iostream>
#include <algorithm>

using namespace std;

void Solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long count = 0;
	for (int i = 0; i < n - 1; ++i) {
		count += upper_bound(a + i + 1, a + n, k - a[i]) - lower_bound(a + i + 1, a + n, k - a[i]);
	}
	cout << count << '\n';
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
