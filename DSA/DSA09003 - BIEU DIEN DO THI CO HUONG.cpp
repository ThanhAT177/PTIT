#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int v, e;
		cin >> v >> e;
		vector<vi> list(v + 1); 
		while (e--) {
			int a, b;
			cin >> a >> b;
			list[a].emplace_back(b);
		}
		for (int i = 1; i <= v; ++i) {
			cout << i << ": ";
			for (int x : list[i]) {
				cout << x << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}