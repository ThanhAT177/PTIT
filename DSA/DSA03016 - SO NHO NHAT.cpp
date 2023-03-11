#include <iostream>

using namespace std;

void Screen(int s, int d) {
	int num9, du;
	if (s % 9 == 0) {
		num9 = s/9 - 1;
		du = 9;
	} else {
		num9 = s/9;
		du = s % 9;
	}
	if (num9 == d - 1) {
		cout << du;
		while (num9--) {
			cout << 9;
		}
		cout << '\n';
	} else {
		int num0 = d - num9 - 2;
		if (num0 > 0) {
			cout << 1;
			while (num0--) {
				cout << 0;
			}
			cout << du - 1;
			while (num9--) {
				cout << 9;
			}
			cout << '\n';
		} else {
			cout << 1;
			cout << du - 1;
			while (num9--) {
				cout << 9;
			}
			cout << '\n';
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int s, d;
		cin >> s >> d;
		if (s > 9*d) {
			cout << "-1\n";
		} else {
			Screen(s, d);
		}
	}
	return 0;
}
