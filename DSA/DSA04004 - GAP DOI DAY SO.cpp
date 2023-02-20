#include <iostream>
#include <vector>
using namespace std;

void Solve(long long n, long long k) {
	vector<long long> ans = {1};
	for (long long i = 2; i <= n; ++i) {
		vector<long long> b = ans;
		ans.emplace_back(i);
		ans.insert(ans.end(), b.begin(), b.end());
	}
	cout << ans[k] << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		Solve(n, k - 1);
	}
	return 0;
}
