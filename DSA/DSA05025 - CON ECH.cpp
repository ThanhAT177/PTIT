#include <iostream>
using namespace std;

long long CountWays(int n) {
    long long pos[n + 1];
    pos[0] = 1;
    pos[1] = 1;
    pos[2] = 2;
    for (int i = 3; i <= n; i++) {
        pos[i] = pos[i - 1] + pos[i - 2] + pos[i - 3];
    }
    return pos[n];
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << CountWays(n) << '\n';
	}
	return 0;
}