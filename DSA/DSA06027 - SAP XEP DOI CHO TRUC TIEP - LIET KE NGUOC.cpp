#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void DSSortAndList(vi a, int n) {
	vector<vi> list;
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[i] > a[j]) {
				Swap(a[i], a[j]);
			}
		}
		list.emplace_back(a);
	}
	for (int i = n - 2; i >= 0; --i) {
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
		DSSortAndList(a, n);
	}
	return 0;
}
