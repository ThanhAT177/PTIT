#include <iostream>
#include <algorithm>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i <n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		long long num1 = a[0], num2 = a[1];
		for (int i = 2; i < n; i += 2) {
			num1 = num1*10 + a[i];
		}
		for (int i = 3; i < n; i += 2) {
			num2 = num2*10 + a[i];
		}
		cout << num1 + num2 << '\n';
	}
	return 0;
}
