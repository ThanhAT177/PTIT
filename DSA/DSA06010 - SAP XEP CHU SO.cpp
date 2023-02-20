#include <iostream>
using namespace std;

void ArangeDigits(int a[], int n) {
	bool exist[10] = {};
	for (int i = 0; i < n; ++i) {
		while (a[i]) {
			exist[a[i] % 10] = true;
			a[i] /= 10;
		}
	}
	for (int i = 0; i < 10; ++i) {
		if (exist[i]) {
			cout << i << ' ';
		}
	}
	cout << '\n';
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
		ArangeDigits(a, n);
	}
	return 0;
}
