#include <iostream>
#include <vector>
using namespace std;

long long SumEqualK(vector<int> a, int n, int k) {
	int count = 0;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[i] + a[j] == k) {
				++count;
			}
		}
	}
	return count;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		cout << SumEqualK(a, n, k) << '\n';
	}
	return 0;
}
