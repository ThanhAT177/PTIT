#include <iostream>
using namespace std;

void GenerateCombination(int n, int k) {
	int a[k + 1];
	for (int i = 1; i <= k; ++i) {
		a[i] = i;
	}
	while (1) {
		for (int i = 1; i <= k; ++i) {
			cout << a[i];
		}
		cout << ' ';
		int i = k;
		while (a[i] >= n - k + i && i) {
			--i;
		}
		if (i == 0) {
			cout << '\n';
			return;
		}
		++a[i];
		for (int j = i + 1; j <= k; ++j) {
			a[j] = a[j - 1] + 1;
		}
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
		GenerateCombination(n, k);
	}
	return 0;
}
