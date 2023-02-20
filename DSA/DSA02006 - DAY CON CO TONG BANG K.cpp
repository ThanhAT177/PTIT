#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> vi;
bool ok;

void SubArr(vi v, vi ans, int n, int k, int sum, int pos) {
	if (sum == k) {
		ok = false;
		cout << '[';
		for (int i = 0; i < ans.size() - 1; ++i) {
			cout << ans[i] << ' ';
		}
		cout << ans[ans.size()- 1] << "] ";
	}
	for (int i = pos; i < n; ++i) {
		if (sum + v[i] > k) {
			return;
		}
		ans.emplace_back(v[i]);
		SubArr(v, ans, n, k, sum + v[i], i + 1);
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
		int n, k;
		cin >> n >> k;
		vi v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		vi ans;
		SubArr(v, ans, n, k, 0, 0);
		if (ok) {
			cout << "-1\n";
		} else {
		    cout << '\n';
		}
	}
	return 0;
}