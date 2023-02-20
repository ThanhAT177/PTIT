#include <iostream>
#include <bitset>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		bitset<32768> exist = {};
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int min = a[0], max = a[0];
		exist[a[0]] = true;
		for (int i = 1; i < n; ++i) {
			if (a[i] > max) {
				max = a[i];
			}
			if (a[i] < min) {
				min = a[i];
			}
			exist[a[i]] = true;
		}
		cout << max - min + 1 - exist.count() << '\n';
	}
	return 0;
}
