#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void SSortAndList(vi a, int n) {
	vector<vi> list;
	int min_index, pos;
	for (int i = 0; i < n - 1; ++i) {
		min_index = i;
		for (int j = i + 1; j < n; ++j) {
			if (a[min_index] > a[j]) {
				min_index = j;
			}
		}
		Swap(a[i], a[min_index]);
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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	SSortAndList(a, n);
	return 0;
}
