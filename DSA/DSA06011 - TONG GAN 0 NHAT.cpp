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
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int min = 1e9;
		int pos1, pos2;
		for (int i = 0; i < n - 1; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (abs(a[i] + a[j]) < min) {
					min = abs(a[i] + a[j]);
					pos1 = i;
					pos2 = j;
				}
			}
		}
		cout << a[pos1] + a[pos2] << '\n';
	}
	return 0;
}
