#include <iostream>

using namespace std;

int TernarySearch(int a[], int l, int h, int x) {
	
}

int BinarySearch(int a[], int l, int h, int x) {
	while (l <= h) {
		int mid = (l + h)/2;
		if (a[mid] > a[mid + 1]) {
			return mid + 1;
		}
		++l;
		--h;
	}
	return -1;
}

void Solve() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
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
