#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool ok;

void Try(int a[], int n, int x, vector<int> ans, int pos) {
	if (x < 0) {
		return;
	}
	if (x == 0) {
		ok = false;
		cout << '[';
		for (int i = 0; i < ans.size() - 1; ++i) {
			cout << ans[i] << ' ';
		}
		cout << ans.back() << ']';
	}
	for (int i = pos; i < n; ++i) {
		ans.emplace_back(a[i]);
		Try(a, n, x - a[i], ans, i);
		ans.pop_back();
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		ok = true;
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		Try(a, n, x, {}, 0);
		if (ok) {
			cout << "-1\n";
		} else {
			cout << '\n';
		}
	}
	return 0;
}
