#include <iostream>

using namespace std;

void Screen(int a[], int n) {
	for (int i = 1; i <= n; ++i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
}

void PreCombination(int a[], int n, int k) {
	int pos = k;
	while (pos > 0 && a[pos] - a[pos - 1] <= 1) {
		--pos;
	}
	if (pos == 0) {
		for (int i = n - k + 1; i <= n; ++i) {
			cout << i << ' ';
		}
		cout << '\n';
		return;
	}
	--a[pos];
	int tail = n;
	for (int j = k; j > pos; --j) {
		a[j] = tail--;
	}
	Screen(a, k);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[k + 1] = {};
		for (int i = 1; i <= k; ++i) {
			cin >> a[i];
		}
		PreCombination(a, n, k);
	}
	return 0;
}