#include <iostream>
#include <climits>
using namespace std;

void FindTwoMin(int a[], int n) {
	int sub_min = INT_MAX, min = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] < min) {
			sub_min = min;
			min = a[i];
		} else if (a[i] < sub_min && a[i] > min) {
			sub_min = a[i];
		}
	}
	if (sub_min == INT_MAX) {
		cout << "-1\n";
	} else {
		cout << min << ' ' << sub_min << '\n';
	}
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
		FindTwoMin(a, n);
	}
	return 0;
}
