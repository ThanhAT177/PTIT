#include <iostream>
#include <algorithm>

using namespace std;

bool Cmp(int a, int b) {
	return a > b;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n, Cmp);
		long long ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += a[i]*b[i];
		}
		cout << ans << '\n';
	}
	return 0;
}
