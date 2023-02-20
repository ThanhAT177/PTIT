#include <iostream>
using namespace std;

void Swap(char &a, char &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void GenerateBinaryString(int n, int k) {
	string s = "";
	for (int i = 1; i <= n - k; ++i) {
		s += '0';
	}
	for (int i = 1; i <= k; ++i) {
		s += '1';
	}
	while (1) {
		cout << s << '\n';
		int i = n - 2;
		while (i >= 0 && s[i] >= s[i + 1]) {
			--i;
		}
		if (i == -1) {
			return;
		}
		int k = n - 1;
		while (s[k] == '0') {
			--k;
		}
		s[i] = '1';
		s[k] = '0';
		int l = i + 1, r = n - 1;
		while (l < r) {
			Swap(s[l], s[r]);
			++l;
			--r;
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		GenerateBinaryString(n, k);
	}
	return 0;
}
