#include <iostream>
using namespace std;

int NumOfLane(int a[], int m, int n) {
	
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int m, n;
		cin >> m >> n;
		int a[m*n];
		for (int i = 0; i < m*n; ++i) {
			cin >> a[i];
		}
		cout << NumOfLane(a, m, n) << '\n';
	}
	return 0;
}
