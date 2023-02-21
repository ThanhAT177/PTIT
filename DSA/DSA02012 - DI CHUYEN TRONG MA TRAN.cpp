#include <iostream>

using namespace std;
int a[100][100], count;

void Backtrack(int m, int n, int column, int row) {
	if (row == m - 1 && column == n - 1) {
		++count;
	}
	if (row == m || column == n) {
		return;
	}
	Backtrack(m, n, column + 1, row);
	Backtrack(m, n, column, row + 1);
}

void Solve() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	Backtrack(m, n, 0, 0);
	cout << count << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		count = 0;
		Solve();
	}
	return 0;
}