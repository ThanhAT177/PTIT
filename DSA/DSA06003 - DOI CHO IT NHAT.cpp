#include <iostream>

using namespace std;
int count;

void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void SelectionSort(int a[], int n) {
	int min_index, pos;
	for (int i = 0; i < n - 1; ++i) {
		min_index = i;
		for (int j = i + 1; j < n; ++j) {
			if (a[min_index] > a[j]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			Swap(a[i], a[min_index]);
			++count;
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		count = 0;
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		SelectionSort(a, n);
		cout << count << '\n';
	}
	return 0;
}