#include <iostream>
#include <algorithm>

using namespace std;

void Solve(long long a[], int n) {
	for (int i = n - 1; i >= 2; --i) {
		int l = 0, h = i - 1;
		while (l < h) {
			if (a[l] + a[h] == a[i]) {
				cout << "YES\n";
				return;
			}
			if (a[l] + a[h] > a[i]) {
				--h;
			} else {
				++l;
			}
		}
	}
	cout << "NO\n";
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			a[i] *= a[i];
		}
		sort(a, a + n);
		Solve(a, n);
	}
	return 0;
}