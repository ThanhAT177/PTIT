#include <iostream>
using namespace std;

void GenerateNext(int n, int k) {
	int a[k + 1];
	for (int i = 1; i <= k; ++i) {
		cin >> a[i];
	}
	int i = k;
	while (a[i] >= n - k + i && i) {
		--i;
	}
	if (!i) {
		for (int j = 1; j <= k; ++j) {
			cout << j << ' ';
		}
		cout << '\n';
		return;
	}
	++a[i];
	for (int j = i + 1; j <= k; ++j) {
		a[j] = a[j - 1] + 1;
	}
	for (int j = 1; j <= k; ++j) {
		cout << a[j] << ' ';
	}
	cout << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		GenerateNext(n, k);
	}
	return 0;
}
