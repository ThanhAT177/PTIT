#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int begin = lower_bound(a.begin(), a.begin() + n/2, a[n/2]) - a.begin();
	if (2*begin >= n || a[begin + n/2] != a[begin]) {
		cout << "NO\n";
	} else {
		cout << a[begin] << '\n';
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}