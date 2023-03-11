#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct ToaDo {
	int x1, x2;
};

bool Cmp(ToaDo a, ToaDo b) {
	return a.x2 < b.x2;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ToaDo> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i].x1 >> a[i].x2;
		}
		sort(a.begin(), a.end(), Cmp);
		int end = 0, cnt = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i].x1 >= end) {
				end = a[i].x2;
				++cnt;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
