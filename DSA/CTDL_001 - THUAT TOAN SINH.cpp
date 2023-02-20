#include <iostream>
using namespace std;

void Screen(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	return;
}

void GeneratePalindromicBinary(int a[], int n, int size) {
	if (n & 1) {
		if ((2*size + 1) > n) {
			Screen(a, n);
			return;
		}
	} else {
		if (2*size == n) {
			Screen(a, n);
			return;
		}
	}
	for (int i = 0; i <= 1; ++i) {
		a[size] = a[n - 1 - size] = i;
		GeneratePalindromicBinary(a, n, size + 1);
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	GeneratePalindromicBinary(a, n, 0);
	return 0;
}
