#include <iostream>
#include <algorithm>

using namespace std;

struct Work {
	int s, f;
};

bool Compare (Work a, Work b) {
	return a.f < b.f;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Work a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i].s;
		}
		for (int i = 0; i < n; ++i) {
			cin >> a[i].f;
		}
		sort(a, a + n, Compare);
		int cnt = 0, end = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i].s >= end) {
				end = a[i].f;
				++cnt;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
