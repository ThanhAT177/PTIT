#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void Backtrack(vector<int> v, int n, vector<bool> visit) {
	if (v.size() == n + 1) {
		for (int i = 1; i < n + 1; ++i) {
			cout << v[i];
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; ++i) {
		if (abs(i - v.back()) > 1 && !visit[i]) {
			v.emplace_back(i);
			visit[i] = true;
			Backtrack(v, n, visit);
			visit[i] = false;
			v.pop_back();
		}
	}
}

void Solve() {
	int n;
	cin >> n;
	vector<bool> visit(n + 1, false);
	Backtrack({-1}, n, visit);
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
