#include <iostream>
using namespace std;

void FindArr(int a[], int l, int h) {
	bool check = false;
	while (1) {
		for (int i = l + 1; i <= h; ++i) {
			if (a[i] < a[l]) {
				check = true;
				break;
			}
		}
		if (check) {
			break;
		} else {
			++l;
		}
	}
	check = false;
	while (1) {
		for (int i = l + 1; i < h; ++i) {
			if (a[i] > a[h]) {
				check = true;
				break;
			}
		}
		if (check) {
			break;
		} else {
			--h;
		}
	}
	cout << l + 1 << ' ' << h + 1 << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		FindArr(a, 0, n - 1);
	}	
	return 0;
}
