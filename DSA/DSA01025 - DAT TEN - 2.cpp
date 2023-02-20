#include <iostream>

using namespace std;

void GenerateName(string s, int n, int k, int pos) {
	if (s.length() == k) {
		cout << s << '\n';
		return;
	}
	for (int i = pos; i < n; ++i) {
		GenerateName(s + char('A' + i), n, k, i + 1);
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
		GenerateName("", n, k, 0);
	}
	return 0;
}
