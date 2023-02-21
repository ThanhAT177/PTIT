#include <iostream>
#include <cmath>

using namespace std;

void Screen(int a[], int n) {
	for (int i = 1; i <= n; ++i) {
		cout << a[i];
	}
	cout << '\n';
}

void Backtrack(int a[], int visit[], int n, int size) {
	cout << a[size - 1] << "&&" << a[size - 2] << '\n';
	if (abs(a[size] - a[size - 1]) == 1) {
		return;
	}
	if (size == n) {
		Screen(a, n);
		return;
	}
	for (int i = 1; i <= n; ++i) {
		if (!visit[i]) {
			a[size] = i;
			cout << "size = " << size << " && i = " << i << '\n'; 
			visit[i] = 1;
			Backtrack(a, visit, n, size + 1);
			visit[i] = 0;
		}
	}
}

void Solve() {
	int n;
	cin >> n;
	int a[n + 1], b[n + 1] = {};
	a[0] = -86;
	Backtrack(a, b, n, 1);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
