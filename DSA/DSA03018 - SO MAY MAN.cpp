#include <iostream>

using namespace std;

bool LuckyNum(int n) {
	for (int num7 = n/7; num7 > 1; --num7) {
		int more = n - 7*num7;
		if (more % 4 == 0) {
			for (int num4 = more/4; num4 > 0; --num4) {
				cout << '4';
			}
			while (num7--) {
				cout << '7';
			}
			cout << '\n';
			return true;
		}
	}
	return false;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (!LuckyNum(n)) {
			cout << "-1\n";
		}
	}
	return 0;
}
