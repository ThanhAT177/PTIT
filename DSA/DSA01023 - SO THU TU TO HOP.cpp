#include <iostream>

using namespace std;

int NumOfCombination(int n, int k) {
	int a[k + 1] = {};
	for (int i = 1; i <= k; ++i) {
		cin >> a[i];
	}
	int count = 1, pos;
	while (1) {
		pos = k;
		while (pos > 0 && a[pos] - a[pos - 1] <= 1) {
			--pos;
		}
		if (pos == 0) {
			return count;
		}
		--a[pos];
		int tail = n;
		for (int j = k; j > pos; --j) {
			a[j] = tail--;
		}
		++count;
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
		cout << NumOfCombination(n, k) << '\n';
	}
	return 0;
}
