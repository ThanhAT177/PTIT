#include <iostream>

using namespace std;

void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void Check(int a[], int n) {
	int mid = n/2;
	for (int i = 0; i < mid; ++i) {
		if (a[i] > a[mid]) {
			Swap(a[i], a[n - 1 - i]);
		} else if (a[i] == a[mid] && a[n - 1 - i] < a[mid]) {
			Swap(a[i], a[n - 1 - i]);
		}
	}
	for (int i = 0; i < n - 1; ++i) {
		if (a[i + 1] < a[i]) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
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
		Check(a, n);
	}
	return 0;
}
