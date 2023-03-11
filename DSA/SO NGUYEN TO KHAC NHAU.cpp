#include <iostream>
#include <set>
#include <map>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
	if (n < 2) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	if (n % 2 == 0) {
		return false;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set<int> se;
		map<int, int> mp;
		int tmp;
		for (int i = 0; i < n; ++i) {
			cin >> tmp;
			se.insert(tmp);
		}
		for (auto it = se.begin(); it != se.end(); ++it) {
			if (!mp[*it] && IsPrime(*it)) {
				mp[*it] = 1;
				cout << *it << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
