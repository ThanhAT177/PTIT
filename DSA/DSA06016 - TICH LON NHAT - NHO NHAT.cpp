#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<long long> &a, int n) {
	int key;
	for (int i = 0; i < n; ++i) {
		key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<long long> a(n), b(m);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < m; ++i) {
			cin >> b[i];
		}
		InsertionSort(a, n);
		InsertionSort(b, m);
		cout << a[n - 1]*b[0] << '\n';
	}
	return 0;
}
