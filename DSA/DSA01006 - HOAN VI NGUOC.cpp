#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void GenerateReversePermutation(int n) {
	int a[n];
	for (int i = 0; i < n; ++i) {
		a[i] = n - i;
	}
	while (1) {
		for (int i = 0; i < n; ++i) {
			cout << a[i];
		}
		cout << ' ';
		int i = n - 2;
		while (a[i] < a[i + 1] && i >= 0) {
			--i;
		}
		if (i == -1) {
			cout << '\n';
			return;
		}
		int k = n - 1;
		while (a[k] > a[i]) {
			--k;
		}
		Swap(a[i], a[k]);
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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		GenerateReversePermutation(n);
	}
	return 0;
}
