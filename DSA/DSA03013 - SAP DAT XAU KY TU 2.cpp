#include <iostream>

using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int d;
		cin >> d;
		string s;
		cin >> s;
		int a[257] = {0};
		int max = 0;
		for (int i = 0; s[i]; ++i) {
			a[s[i]]++;
			if (a[s[i]] > max) {
				max = a[s[i]];
			}
		}
		if (d*(max - 1) + 1 <= s.length()) {
			cout << "1\n";
		} else {
			cout << "-1\n";
		}
		
	}
	return 0;
}
