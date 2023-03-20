#include <iostream>
#include <algorithm>

using namespace std;

int LowerBound(long long a[], int l, int h, int x) {
	while (l <= h) {
		int m = (l + h)/2;
		if (a[m] < x && a[m + 1] >= x) {
			return m;
		}
		if (a[m] < x) {
			l = m + 1;
		} else {
			h = m - 1;
		}
	}
	return -1;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		long long a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		long long count = 0;
		for (int i = 0; i < n - 1; ++i) {
			int j = LowerBound(a, i + 1, n - 1, k + a[i]);
			if (j != -1) {
				count += j - i;
			}
		}
		cout << count << '\n';
	}
	return 0;
}
