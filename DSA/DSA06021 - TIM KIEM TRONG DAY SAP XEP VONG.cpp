#include <iostream>

using namespace std;

int BinarySearch2(int a[], int l, int h, int x) {
	while (l <= h) {
		int mid = (l + h)/2;
		if (a[mid] == x) {
			return mid + 1;
		}
		if (a[mid] > x) {
			h = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return -1;
}

int BinarySearch(int a[], int l, int h, int x) {
	while (l <= h) {
		int mid = (l + h)/2;
		if (a[mid] > a[mid + 1]) {
			return mid;
		}
		if (a[mid] > a[0]) {
			l = mid + 1;
		} else {
			h = mid - 1;
		}
	}
	return h;
}

void Solve() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int m = BinarySearch(a, 0, n - 1, 0);
	int ans = BinarySearch2(a, 0, m, x);
	if (ans != -1) {
		cout << ans << '\n';
		return;
	} 
	cout << BinarySearch2(a, m + 1, n - 1, x) << '\n';
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
