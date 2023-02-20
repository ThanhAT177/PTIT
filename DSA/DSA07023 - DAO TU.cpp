#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		vector<string> stack;
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) {
			stack.emplace_back(tmp);
		}
		for (int i = stack.size() - 1; i >= 0; --i) {
			cout << stack[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
