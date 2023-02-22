#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

bool BinarySearch(int a[], int l, int h, int x) {
	while (l <= h) {
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

void Giao(int a[], int b[], int n, int m) {
	if (n > m) {
		for (int i = 0; i < m; ++i) {
			if (BinarySearch(a, 0, n - 1, b[i])) {
				cout << b[i] << ' ';
			}
		}
	} else {
		for (int i = 0; i < n; ++i) {
			if (BinarySearch(b, 0, m - 1, a[i])) {
				cout << a[i] << ' ';
			}
		}
	}
	cout << '\n';
}

void Hop(int a[], int b[], int n, int m) {
	set<int> se;
	for (int i = 0; i < n; ++i) {
		se.insert(a[i]);
	}
	for (int i = 0; i < m; ++i) {
		se.insert(b[i]);
	}
	for (auto it = se.begin(); it != se.end(); ++it) {
		cout << *it << ' ';
	}
	cout << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int j = 0; j < m; ++j) {
			cin >> b[j];
		}
		sort(a, a + n);
		sort(b, b + m);
		Hop(a, b, n, m);
		Giao(a, b, n, m);
	}
	return 0;
}
