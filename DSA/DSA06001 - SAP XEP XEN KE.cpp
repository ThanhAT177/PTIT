#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

int Partition(int a[], int l, int h) {
	int pivot = a[(l + h) / 2];
	int left = l, right = h;
	while (left <= right) {
		while (a[left] < pivot) {
			++left;
		}
		while (a[right] > pivot) {
			--right;
		}
		if (left <= right) {
			swap(a[left], a[right]);
			++left;
			--right;
		}
	}
	return left;
}


void QSort(int a[], int l, int h) {
	if (l < h) {
		int i = Partition(a, l, h);
		QSort(a, l, i - 1);
		QSort(a, i, h);
	}
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
		QSort(a, 0, n - 1);
		for (int i = 0; i < n/2; ++i) {
			cout << a[n - 1 - i] << ' ' << a[i] << ' ';
		}
		if (n & 1) {
			cout << a[n/2];
		}
		cout << '\n';
	}
	return 0;
}
