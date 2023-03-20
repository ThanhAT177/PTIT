#include <iostream>

using namespace std;
const int M = int(1e9 + 7);

int Tinh(int n, int k) {
	int i, j, f[1000005] = {0};
	f[0] = f[1] = 1;
	for (int i = 2; i <=n; ++i) {
		for (int j = 1; j <= min(i, k); ++j) {
			f[i] = (f[i] + f[i - j]) % M;
		}
	}
	return f[n];
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		cout << Tinh(n, k) << '\n';
	}
	return 0;
}
