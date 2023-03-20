#include <iostream>

using namespace std;

int BinarySearch(int a[], int l, int h, int n) {
	while (l <= h) {
		int m = (l + h)/2;
		if (m + 1 < n && a[m] > a[m + 1]) {
			return m + 1;
		}
		if (a[m] > a[0]) {
			l = m + 1;
		} else {
			h = m - 1;
		}
	}
	return 0;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		cout << BinarySearch(a, 0, n - 1, n) << '\n';
	}
	return 0;
}
