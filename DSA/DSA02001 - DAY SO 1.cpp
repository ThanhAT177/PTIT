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
		while (n) {
			cout << "[";
			for (int i = 0; i < n - 1; ++i) {
				cout << a[i] << ' ';
			}
			cout << a[n - 1] << "]\n";
			for (int i = 0; i < n - 1; ++i) {
				a[i] += a[i + 1];
			}
			--n;
		}
		
	}
	return 0;
}
