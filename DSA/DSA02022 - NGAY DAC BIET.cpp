#include <iostream>
#include <vector>

using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<string> day = {"02", "20", "22"};
	vector<string> month = {"02"};
	vector<string> year = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
	for (string x : day) {
		for (string y : month) {
			for (string z : year) {
				cout << x << '/' << y << '/' << z << '\n';
			}
		}
	}
	return 0;
}
