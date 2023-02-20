#include <iostream>
#include <vector>
using namespace std;

vector<string> stored;

void GenerateBinary(int now, int n) {
	string s = stored[now - 1];
	int i = s.length() - 1;
	while (s[i] == '1' && i >= 0) {
		--i;
	}
	if (i == -1) {
		for (i = s.length() - 1; i > 0; --i) {
			s[i] = '0';
		}
		s += '0';
	} else {
		for (i = s.length() - 1; s[i] == '1'; --i) {
			s[i] = '0';
		}
		s[i] = '1';
	}
	stored.emplace_back(s);
	if (now + 1 == n) {
		return;
	}
	GenerateBinary(now + 1, n);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stored.emplace_back("1");
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n > stored.size()) {
			GenerateBinary(stored.size(), n);
		}
		for (int i = 0; i< n; ++i) {
			cout << stored[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
