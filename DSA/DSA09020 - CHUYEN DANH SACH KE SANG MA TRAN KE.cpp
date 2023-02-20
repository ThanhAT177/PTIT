#include <iostream>
#include <sstream>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cin.ignore();
	int g[n + 1][n + 1] = {};
	for (int i = 1; i <= n; ++i) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		int a;
		while (ss >> a) {
		    g[i][a] = g[a][i] = 1;
		}
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cout << g[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}