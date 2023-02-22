#include <iostream>

using namespace std;

void Swap(char &a, char &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void Combination(string s, int n) {
	int i = n - 2;
	while (s[i] >= s[i + 1] && i >= 0) {
		--i;
	}
	if (i == -1) {
		cout << "BIGGEST\n";
		return;
	}
	int k = n - 1;
	while (s[k] <= s[i]) {
		--k;
	}
	Swap(s[i], s[k]);
	int l = i + 1, h = n - 1;
	while (l < h) {
		Swap(s[l], s[h]);
		++l;
		--h;
	}
	cout << s << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int stt;
		string s;
		cin >> stt >> s;
		cout << stt << ' ';
		Combination(s, s.length());
	}
	return 0;
}
