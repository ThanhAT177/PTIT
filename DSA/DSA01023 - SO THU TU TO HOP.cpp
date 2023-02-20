#include <iostream>
using namespace std;

int count;

void Screen(int a[], int n) {
	for (int i = 1; i <= n; ++i) {
		cout << a[i];
	}
	cout << '\n';
}

void GeneratePreCombination(int n, int k) {
	int a[k + 1];
	for (int i = 1; i <= k; ++i) {
		cin >> a[i];
	}
	int i = k;
	while (1) {
		while (a[i] == a[i - 1] + 1) {
			--i;
			if (i == 0) {
				return;
			}
		}
		while (a[i] > a[i - 1] + 1) {
			++count;
			Screen(a, k);
			--a[i];
		}
		i = k;
	}
}

main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		count = 1;
		int n, k;
		cin >> n >> k;
		GeneratePreCombination(n, k);
		cout << count << '\n';
	}
	return 0;
}
