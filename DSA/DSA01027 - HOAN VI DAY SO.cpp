#include <iostream>
#include <algorithm>
using namespace std;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void PermutationArray(int a[], int n) {
	while (1) {
		for (int i = 0; i < n; ++i) {
			cout << a[i] << ' ';
		}
		cout << '\n';
		int i = n - 2;
		while (i >= 0 && a[i] > a[i + 1]) {
			--i;
		}
		if (i == -1) {
			return;
		}
		int j = n - 1;
		while (a[j] < a[i]) {
			--j;
		}
		Swap(a[i], a[j]);
		int l = i + 1, r = n - 1;
		while (l < r) {
			Swap(a[l], a[r]);
			++l;
			--r;
		}
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
	sort(a, a + n);
	PermutationArray(a, n);
	return 0;
}
