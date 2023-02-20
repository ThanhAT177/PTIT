#include <iostream>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int g[n + 1][n + 1];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> g[i][j];
			if (g[i][j]) {
				cout << j << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
