#include <iostream>
using namespace std;

void Screen(int a[], int step, int n) {
	cout << "Buoc " << step << ": ";
	for (int i = 0; i < n; ++i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
}

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void BubbleSort(int a[], int n) {
	int check;
	for (int i = 0; i < n; ++i) {
		check = 1;
		for (int j = 0; j < n - 1; ++j) {
			if (a[j] > a[j + 1]) {
				check = 0;
				Swap(a[j], a[j + 1]);
			}
		}
		if (check) {
			break;
		}
		Screen(a, i + 1, n);
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
	BubbleSort(a, n);
	return 0;
}
