#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> vi;
int count = 0;

void SubArr(vi v, vector<vi> &ans, vi tmp, int n, int k, int pos, int sum) {
	if (sum == k) {
		++count;
		ans.insert(ans.begin(), tmp);
		return;
	}
	for (int i = pos; i < n; ++i) {
		if (sum + v[i] > k) {
			return;
		}
		tmp.emplace_back(v[i]);
		SubArr(v, ans, tmp, n, k, i + 1, sum + v[i]);
		tmp.pop_back();
	} 
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vi v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	vector<vi> ans;
	SubArr(v, ans, {}, n, k, 0, 0);
	for (auto x : ans) {
		for (int i : x) {
			cout << i << ' ';
		}
		cout << '\n';
	}
	cout << count;
	return 0;
}
