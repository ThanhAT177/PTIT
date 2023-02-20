#include <iostream>
using namespace std;

void Solve(int a[], int n, int k) {
	int key;
	for (int i = 0; i < n; ++i) {
		key = a[i];
		int j = i - 1;
		while (a[j] > key && j >= 0) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
	}
	for (int i = n - 1; i > n - 1 - k; --i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		Solve(a, n, k);
		cout << '\n';
	}
	return 0;
}
