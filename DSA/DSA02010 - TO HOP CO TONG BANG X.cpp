#include <iostream>

using namespace std;
int n, x, a[21], c[21] = {};
bool ok = true;

void Screen() {
	cout << '[';
	for (int i = 0; c[i]; ++i) {
		cout << c[i] << ' ';
	}
	cout << "]";
}

void Backtrack(int i, int s) {//i là vị trí trong mảng đầu
	for (int j = 1; j <= n; ++j) {//j là size?
		if (a[j] >= c[i - 1] && s + a[i] <= x) {
			c[i] = a[j];
			s += a[j];
			if (s == x) {
				ok = false;
				Screen();
			} else Backtrack(i + 1, s);
			s -= a[i];
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		Backtrack(1, 0);
		if (ok) {
			cout << "-1\n";
		} else {
			cout << '\n';
		}
	return 0;
}}
