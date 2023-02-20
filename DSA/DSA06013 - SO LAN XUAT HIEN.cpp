#include <iostream>
using namespace std;

struct Pair {
	int value, frequency = 0;
};

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		Pair x;
		cin >> n >> x.value;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] == x.value) {
				++x.frequency;
			}
		}
		if (x.frequency) {
			cout << x.frequency << '\n';
		} else {
			cout << "-1\n";
		}
	}
	return 0;
}