#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void Swap(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void ISortAndList(vi a, int n) {
	vector<vi> list;
	int key;
	for (int i = 0; i < n; ++i) {
		key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = key;
		list.emplace_back(a);
	}
	for (int i = n - 1; i >= 0; --i) {
		cout << "Buoc " << i << ": ";
		for (int j = 0; j <= i; ++j) {
			cout << list[i][j] << ' ';
		}
		cout << '\n';
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ISortAndList(a, n);
	return 0;
}
