#include <iostream>
#include <queue>

using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		long long val;
		priority_queue<long long, vector<long long>, greater<long long>> a;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> val;
			a.push(val);
		}
		long long res = 0;
		while (a.size() > 1) {
			long long x = a.top();
			a.pop();
			long long y = a.top();
			a.pop();
			a.push(x + y);
			res += x + y;
		}
		cout << res << '\n';
	}
	return 0;
}
