#include <iostream>
using namespace std;

void Screen(int a[], int step) {
	cout << "Buoc " << step << ": ";
	for (int i = 0; i <= step; ++i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
}

void InsertionSort(int a[], int n) {
	int key;
	for (int i = 0; i < n; ++i) {
		key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
		Screen(a, i);
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
	InsertionSort(a, n);
	return 0;
}
