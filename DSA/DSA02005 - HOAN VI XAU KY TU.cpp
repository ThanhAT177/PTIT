#include <iostream>
using namespace std;

void Swap(char &a, char &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void PermutationString(string s, int n) {
	while (1) {
		cout << s << ' ';
		int i = n - 2;
		while (s[i] > s[i + 1] && i >= 0) {
			--i;
		}
		if (i == -1) {
			return;
		}
		int k = n - 1;
		while (s[k] < s[i]) {
			--k;
		}
		Swap(s[i], s[k]);
		int l = i + 1;
		int r = n - 1;
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
		string s;
		cin >> s;
		PermutationString(s, s.length());
		cout << '\n';
	}
	return 0;
}
