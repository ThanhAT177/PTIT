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
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n, Cmp);
		int min = a[0] - a[n - 1];
		for (int i = 0; i < n - 1; ++i) {
			if (a[i] - a[i + 1] < min) {
				min = a[i] - a[i + 1];
			}
		}
		cout << min << '\n';
	}
	return 0;
}
