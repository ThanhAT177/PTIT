#include <iostream>
using namespace std;

int count;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void GeneratePrePermutation(int n) {
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	while (1) {
		++count;
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
		count = 0;
		int n;
		cin >> n;
		GeneratePrePermutation(n);
		cout << count << '\n';
	}
	return 0;
}
