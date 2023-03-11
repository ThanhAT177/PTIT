#include <iostream>
#include <vector>

using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector<int> l(n, 1);
	int maximum = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (a[i] > a[j]) {
				l[i] = max(l[i], l[j] + 1);
				if (l[i] > maximum) {
					maximum = l[i];
				}
			}
		}
	}
	cout << maximum << '\n';
	return 0;
}
