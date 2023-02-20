#include <iostream>
#include <algorithm>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long modulo = int(1e9 + 7);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		long long max = 0;
		for (int i = 1; i < n; ++i) {
			max = (max + a[i]*i) % modulo;
		}
		cout << max << '\n';
	}
	return 0;
}
