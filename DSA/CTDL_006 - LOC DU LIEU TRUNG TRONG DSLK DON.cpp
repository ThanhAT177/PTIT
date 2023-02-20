#include <iostream>
#include <map>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int tmp;
	map<int, bool> mp;
	while (n--) {
		cin >> tmp;
		if (!mp[tmp]) {
			cout << tmp << ' ';
			mp[tmp] = true;
		}
	}
	return 0;
}
