#include <iostream>

using namespace std;
long long f[100];

char FiboWord(int n, long long k) {
	if (n == 1) {
		return '0';
	}
	if (n == 2) {
		return '1';	
	}
	if (k <= f[n - 2]) {
			return FiboWord(n - 2, k);
		}
		return FiboWord(n - 1, k - f[n - 2]);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 92; ++i) {
		f[i] = f[i -1] + f[i -2 ];
	}
 	int t;
	cin >> t;
	while (t--) {
		long long n, i;
		cin >> n >> i;
		cout << FiboWord(n, i) << '\n';
	}
	return 0;
}
