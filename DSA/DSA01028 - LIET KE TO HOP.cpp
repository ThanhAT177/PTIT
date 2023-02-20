#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Generate(vector<int> v, int n, int k) {
	int a[k + 1];
	for (int i = 1; i <= k; ++i) {
		a[i] = i;
	}
	while (1) {
		for (int i = 1; i <= k; ++i) {
			cout << v[a[i]] << ' ';
		}
		cout << '\n';
		int i = k;
		while (a[i] > n - k + i - 1 && i) {
			--i;
		}
		if (!i) {
			return;
		}
		++a[i];
		for (int j = i + 1; j <= k; ++j) {
			a[j] = a[j - 1] + 1;
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> v[i];
	}
	sort(v.begin() + 1, v.end());
	for (int i = 1; i <= n; ++i) {
		if (v[i] == v[i - 1]) {
			v.erase(v.begin() + i);
			--i;
			--n;
		}
	}
 	Generate(v, n, k);
	return 0;
}
