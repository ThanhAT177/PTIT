#include <iostream>
#include <cstring>

using namespace std;
int f[1000005];

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		memset(f, 0, sizeof(f));
		int n;
		cin >> n;
		
		int a[n + 1];
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		f[1] = a[1];
		f[2] = max(a[1], a[2]);
		for (int i = 3; i <= n; ++i) {
			f[i] = max(f[i - 1], a[i] + f[i - 2]);
		}
		cout << f[n] << '\n';
	}
	return 0;
}
