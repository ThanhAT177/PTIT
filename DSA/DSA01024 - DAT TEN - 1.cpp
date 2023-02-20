#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;
typedef vector<string> vs;

void Screen(vs ans) {
	for (string s : ans) {
		cout << s << ' ';
	}
	cout << '\n';
}

void GenerateName(vs v, vs ans, int n, int k, int pos) {
	if (ans.size() == k) {
		Screen(ans);
		return;
	}
	for (int i = pos; i < n; ++i) {
		ans.emplace_back(v[i]);
		GenerateName(v, ans, n, k, i + 1);
		ans.pop_back();
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vs v;
	set<string> se;
	string tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		se.insert(tmp);
	}
	for (auto it = se.begin(); it != se.end(); ++it) {
		v.emplace_back(*it);
	}
	GenerateName(v, {}, v.size(), k, 0);
	return 0;
}
