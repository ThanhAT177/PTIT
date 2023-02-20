#include <iostream>
#include <algorithm>
using namespace std;

void SumThreeEqualK(int a[], int n, int k) {
	for (int i = 0; i < n - 2; ++i) {
		int l = i + 1, h = n - 1;
		while (l < h) {
			long long sum = a[i];
			sum += a[l];
			sum += a[h];
			if (sum == k) {
				cout << "YES\n";
				return;
			} else if (sum < k) {
				++l;
			}
			else {
				--h;
			}
		}
	}
	cout << "NO\n";
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		SumThreeEqualK(a, n, k);
	}
	return 0;
}
