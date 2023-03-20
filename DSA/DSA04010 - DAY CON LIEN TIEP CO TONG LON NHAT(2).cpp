#include <iostream>

using namespace std;

void Qhd(int a[], int n) {
	int s = 0, e = 0;
	for (int i = 0; i < n; ++i) {
		e = max(a[i], e + a[i]);
		s = max(s, e);
	}
	cout << s << '\n';
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
		Qhd(a, n);
	}
	return 0;
}
