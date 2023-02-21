#include <iostream>

using namespace std;

void Try(string s, int n, int size, int num6) {
	if (s[size - 1] == s[size - 2] && s[size - 1] == '8') {
		return;
	}
	if (size == n - 1 && num6 < 3) {
		cout << s + '6' << '\n';
		return;
	}
	if (num6 == 4 || size > n - 1) {
		return;
	}
	Try(s + '6', n, size + 1, num6 + 1);
	Try(s + '8', n, size + 1, 0);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	Try("8", n, 1, 0);
	return 0;
}