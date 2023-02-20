#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> vi;

void Screen(vector<vi> ans) {
	for (vi x : ans) {
		cout << '[';
		for (int i = 0; i < x.size() - 1; ++i) {
			cout << x[i] << ' ';
		}
		cout << x[x.size() - 1] << "] ";
	}
}

void Solve(vi a, int n) {
	vector<vi> ans;
	while (n) {
		ans.insert(ans.begin(), a);
		for (int i = 0; i < n - 1; ++i) {
			a[i] += a[i + 1];
		}
		a.pop_back();
		--n;
	}
	Screen(ans);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		Solve(a, n);
		cout << '\n';
	}
	return 0;
}
