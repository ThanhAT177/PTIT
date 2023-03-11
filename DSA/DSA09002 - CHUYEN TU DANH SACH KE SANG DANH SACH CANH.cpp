#include <iostream>
#include <sstream>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; ++i) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		int near;
		while (ss >> near) {
			if (near > i) {
				cout << i << ' ' << near << '\n';
			}
		}
	}
	return 0;
}
