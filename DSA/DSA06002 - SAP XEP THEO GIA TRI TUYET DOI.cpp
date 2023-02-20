#include <iostream>
using namespace std;

void Screen(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
}

void MixInsertionSort(int a[], int n, int x) {
	int key, j, tmp;
	for (int i = 0; i < n; ++i) {
		key = a[i], tmp = abs(x - a[i]);
		j = i - 1;
		while (j >= 0 && tmp < abs(x - a[j])) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
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
		MixInsertionSort(a, n, x);
		Screen(a, n);
	}
	return 0;
}
