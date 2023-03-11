#include <iostream>
#include <vector>

using namespace std;

void BFS(vector<vector<int>> ke, int u, vector<bool> visit) {
	vector<int> queue = {u};
	visit[u] = true;
	while (queue.size()) {
		int v = queue.back();
		queue.pop_back();
		cout << v << ' ';
		for (int x : ke[v]) {
			if (!visit[x]) {
				queue.insert(queue.begin(), x);
				visit[x] = true;
			}
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
		vector<vector<int>> ke(v + 1);
		int a, b;
		for (int i = 0; i < e; ++i) {
			cin >> a >> b;
			ke[a].emplace_back(b);
			ke[b].emplace_back(a);
		}
		vector<bool> visit(v + 1, false);
		BFS(ke, u, visit);
		cout <<'\n';
	}
	return 0;
}
