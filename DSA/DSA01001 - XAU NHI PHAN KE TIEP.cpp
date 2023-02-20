#include <iostream>
using namespace std;

void SinhNP(string s, int n) {
	int i = n - 1;
	while (s[i] == '1' && i >= 0) {
		s[i] = '0';
		--i;
	}
	if (i == -1) {
		cout << s << '\n';
		return;
	}
	s[i] = '1';
	cout << s << '\n';
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		SinhNP(s, s.length());
	}
	return 0;
}
