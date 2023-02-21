#include <iostream>

using namespace std;

int FindX(long long a[], long long b[], int l, int h) {
	int mid = l + (h - l)/2;
	if (b[mid] != a[mid] && b[mid - 1] != a[mid]) {
		return mid + 1;
	}
	if (b[mid] != a[mid]) {
		return FindX(a, b, 0, mid - 1);
	}
	return FindX(a, b, mid + 1, h);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n], b[n - 1];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int j = 0; j < n - 1; ++j) {
			cin >> b[j];
		}
		cout << FindX(a, b, 0, n - 1) << '\n';
	}
	return 0;
}
