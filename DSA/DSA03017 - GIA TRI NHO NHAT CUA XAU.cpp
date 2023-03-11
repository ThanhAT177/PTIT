#include <iostream>

using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		string s;
		cin >> s;
		int freq[257] = {0};
		for (int i = 0; s[i]; ++i) {
			++freq[s[i]];
		}
		while (k--) {
			int max_pos = 1;
			for (int i = 1; i < 257; ++i) {
				if (freq[i] > freq[max_pos]) {
					max_pos = i;
				}
			}
			--freq[max_pos];
		}
		long long val = 0;
		for (int i = 1; i < 257; ++i) {
			val += freq[i]*freq[i];
		}
		cout << val << '\n';
	}
	return 0;
}
