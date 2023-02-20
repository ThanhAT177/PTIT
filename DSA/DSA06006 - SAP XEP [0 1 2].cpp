#include <iostream>
using namespace std;

main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int times[3] = {};
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			++times[a[i]];
		}
		for (int i = 0; i < 3; ++i) {
			int tmp = times[i];
			while (tmp--) {
				cout << i << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
