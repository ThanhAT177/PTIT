#include <iostream>

using namespace std;

int MaxInArr(int a[], int l, int h) {
	int max_pos = l;
	for (int i = l + 1; i <= h; ++i) {
		if (a[i] > a[max_pos]) {
			max_pos = i;
		}
	}
	return max_pos;
}

void Solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int max_pos = MaxInArr(a, 0, k - 1);
	cout << a[max_pos] << ' ';
	for (int i = 1; i <= n - k; ++i) {
		if (a[i + k - 1] > a[max_pos]) {
			max_pos = i + k - 1;
		} else if (max_pos < i) {
			max_pos = MaxInArr(a, i, i + k - 1);
		}
		cout << a[max_pos] << ' ';
	}
	cout << '\n';
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
