#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void BSortAndList(vi a, int n) {
	vector<vi> list;
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
		list.emplace_back(a);
	}
	for (int i = list.size() - 1; i >= 0; --i) {
		cout << "Buoc " << i + 1 << ": ";
		for (int x : list[i]) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		BSortAndList(a, n);
	}
	return 0;
}
