#include <iostream>

using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		long long l[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			l[i] = a[i];
		}
		long long maximum = a[0];
		for (int i = 1; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				if (a[i] > a[j]) {
					l[i] = max(l[i], l[j] + a[i]);
				}
			}
			maximum = max(maximum, l[i]);
		}
		cout << maximum << '\n';
	}
	return 0;
}