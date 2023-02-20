#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void Screen(int a[], int step) {
	cout << "Buoc " << step << ": ";
	for (int x : a) {
		cout << x << ' ';
	}
	cout << '\n';
}

void DirectSwapSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[i] > a[j]) {
				Swap(a[i], a[j]);
			}
		}
		Screen(a, i + 1);
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	DirectSwapSort(a, n);
	return 0;
}
