#include <iostream>
#include <unordered_set>
using namespace std;

void Search(int a[], int n) {
	
	for (int i = 0; i < n; ++i) {
		if (set.count(a[i]) > 0) {
			cout << a[i] << '\n';
			return;
		}
		set.insert(a[i]);
	}
	cout << "NO\n";
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
		Search(a, n);
	}
	return 0;
}
