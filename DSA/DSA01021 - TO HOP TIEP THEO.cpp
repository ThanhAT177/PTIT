#include <iostream>
using namespace std;

int NewCharInCombination(int a[], int n, int k) {
	int i = k;
	while (a[i] >= n - k + i && i > 0) {
		--i;
	}
	if (i) {
		return n - a[i] - k + i;
	} else {
		return k;
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[k + 1];
		for (int i = 1; i <= k; ++i) {
			cin >> a[i];
		}
		cout << NewCharInCombination(a, n , k) << '\n';
	}
	return 0;
}
