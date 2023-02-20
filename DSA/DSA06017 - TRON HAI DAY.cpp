#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void Merge(vi a, vi b, int n, int m) {
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			cout << a[i];
			++i;
		} else {
			cout << b[j];
			++j;
		}
		cout << ' ';
	}
	while (i < n) {
		cout << a[i++] << ' ';
	}
	while (j < m) {
		cout << b[j++] << ' ';
	}
	cout << '\n';
}

void BubbleSort(vi &a, int n) {
	int check;
	for (int i = 0; i < n; ++i) {
		check = 1;
		for (int j = 0; j < n - 1; ++j) {
			if (a[j] > a[j + 1]) {
				check = 0;
				Swap(a[j], a[j + 1]);
			}
		}
		if (check) {
			break;
		}
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
		vi a(n), b(m);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int j = 0; j < m; ++j) {
			cin >> b[j];
		}
		BubbleSort(a, n);
		BubbleSort(b, m);
		Merge(a, b, n, m);
	}
	return 0;
}
