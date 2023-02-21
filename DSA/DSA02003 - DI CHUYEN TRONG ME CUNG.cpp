#include <iostream>

using namespace std;
int a[10][10];
bool ok;

void Backtrack(string ans, int n, int column, int row) {
	if (row == n - 1 && row == column) {
		cout << ans << ' ';
		ok = false;
	}
	if (row ==n || column == n) {
		return;
	}
	if (a[row + 1][column]) {
		Backtrack(ans + 'D', n, column, row + 1);
	}
	if (a[row][column + 1]) {
		Backtrack(ans + 'R', n, column + 1, row);
	}
}

void Solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	if (!a[0][0] || !a[n - 1][n - 1]) {
		cout << "-1\n";
		return;
	}
	Backtrack("", n, 0, 0);
	if (ok) {
		cout << -1 ;
	}
	cout << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		ok = true;
		Solve();
	}
	return 0;
}
