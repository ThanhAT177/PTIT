#include <iostream>
#include <climits>
using namespace std;

int Max(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	}
	if (b >= a && b >= c) {
		return b;
	}
	return c;
}

int MaxCrossArr(int a[], int l, int m, int h) {
	int sum = 0, max_left = INT_MIN, max_right = INT_MIN;
	for (int i = m; i >= l; --i) {
		sum += a[i];
		if (sum > max_left) {
			max_left = sum;
		}
	}
	sum = 0;
	for (int i = m + 1; i <= h; ++i) {
		sum += a[i];
		if (sum > max_right) {
			max_right = sum;
		}
	}
	return max_left + max_right;
}

int MaxSubArr(int a[], int l, int h) {
	if (l == h) {
		return a[l];
	}
	int m = (h + l)/2;
	return Max(MaxSubArr(a, l, m), MaxSubArr(a, m + 1, h), MaxCrossArr(a, l, m, h));
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
		cout << MaxSubArr(a, 0, n - 1) << '\n';
	}
	return 0;
}
