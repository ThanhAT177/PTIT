#include <iostream>
using namespace std;

void GenerateString(string s, char c, int n, char x) {
	if (s.size() == n) {
		cout << s << '\n';
		return;
	}
	for (char i = x; i <= c; ++i) {
		GenerateString(s + i, c, n, i);
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	char c;
	int k;
	cin >> c >> k;
	GenerateString("", c, k, 'A');
	return 0;
}