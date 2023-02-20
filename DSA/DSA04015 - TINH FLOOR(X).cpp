#include <iostream>
using namespace std;

void Floor(int a[], int l, int h, int x) {
	int mid = l/2 + h/2;
	if (a[mid] == x) {
		cout << mid + 1 << '\n';
		return;
	}
	if (a[mid] > x && a[mid - 1] < x) {
		cout << mid << '\n';
		return;
	}
	if (a[mid] > x) {
		Floor(a, l, mid - 1, x);
	} else {
		Floor(a, mid + 1, h, x);
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		if (x < a[0] || x > a[n - 1]) {
			cout << "-1\n";
		} else {
			Floor(a, 0, n - 1, x);
		}
	}
	return 0;
}
