#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef vector<int> vi;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		map<int, vi> mp; 
		int v, e;
		cin >> v >> e;
		while (e--) {
			int a, b;
			cin >> a >> b;
			mp[a].emplace_back(b);
			mp[b].emplace_back(a);
		}
		for (auto it : mp) {
			cout << it.first << ": ";
			for (int x : it.second) {
				cout << x << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}
