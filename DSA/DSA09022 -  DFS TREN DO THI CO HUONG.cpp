#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;
int visit[1001];

void DFS(vector<vi> g, int u, int v) {
	cout << u << ' ';
	visit[u] = 1;
	for (int x : g[u]) {
		if (!visit[x]) {
			DFS(g, x, v);
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int v, e, u;
		cin >> v >> e >> u;
		vector<vi> g(v + 1);
		while (e--) {
			int a, b;
			cin >> a >> b;
			g[a].emplace_back(b);
		}
		for (int i = 1; i <= v; ++i) {
			visit[i] = 0;
		}
		DFS(g, u, v);
		cout << '\n';
	}
	return 0;
}
