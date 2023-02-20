#include <iostream>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int first[n];
	for (int i = 0; i < n; ++i) {
		cin >> first[i];
	}
	int k;
	cin >> k;
	for (int x : first) {
		if (x != k) {
			cout << x << ' ';
		}
	}
	return 0;
}
