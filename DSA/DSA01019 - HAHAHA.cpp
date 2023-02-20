#include <iostream>

using namespace std;

void Haha(string s, int n, int size) {
	if (s[size - 1] == s[size - 2] && s[size - 1] == 'H') {
		return;
	}
	if (size == n - 1) {
		cout << s + 'A' << '\n';
		return;
	}
	Haha(s + 'A', n, size + 1);
	Haha(s + 'H', n, size + 1);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Haha("H", n, 1);
	}
	return 0;
}
