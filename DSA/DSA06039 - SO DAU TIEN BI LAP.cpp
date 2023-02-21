#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool BinarySearch(int a[], int l, int h, int x) {
	while (l < h) {
		int m = (l + h)/2;
		if (a[m] == x) {
			return true;
		}
		if (a[m] < x) {
			l = m + 1;
		} else {
			h = m - 1;
		}
	}
	return false;
}

void Solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[j] == a[i]) {
				cout << a[i] << '\n';
				return;
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
		Solve();
	}
	return 0;
}
