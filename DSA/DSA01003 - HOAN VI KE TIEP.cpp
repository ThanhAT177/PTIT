#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void GenerateNextPermutation(int n) {
	int a[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	int i = n - 1;
	while (a[i] > a[i + 1] && i) {
		--i;
	}
	if (!i) {
		for (int j = 1; j <= n; ++j) {
			cout << j << ' ';
		}
		cout << '\n';
		return;
	}
	int k = n;
	while (a[k] < a[i]) {
		--k;
	}
	Swap(a[i], a[k]);
	int l = i + 1, r = n;
	while (l < r) {
		Swap(a[l], a[r]);
		++l;
		--r;
	}
	for (i = 1; i <= n; ++i) {
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
		int n;
		cin >> n;
		GenerateNextPermutation(n);
	}
	return 0;
}
