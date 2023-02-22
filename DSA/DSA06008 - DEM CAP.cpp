#include <iostream>
#include <algorithm>

using namespace std;


main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int j = 0; j < m; ++j) {
			cin >> b[j];
		}
		sort(a, a + n);
		sort(b, b + m);
		cout << DemCap(a, b, n, m) << '\n';
	}
	return 0;
}
