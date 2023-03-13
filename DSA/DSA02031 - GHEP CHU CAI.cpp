#include <iostream>
#include <vector>

using namespace std;

bool NguyenAm(char c) {
	return (c == 'A' || c == 'E');
}

void Try(string ans, vector<bool> visit, char c, int size, char back,
         bool warning) {
	if (ans.length() == size) {
		cout << ans << '\n';
		return;
	}
	for (char x = 'A'; x <= c; ++x) {
		//Neu chua gap
		if (visit[x - 'A']) {
			//Neu khong canh cao
			if (!warning) {
				//Xet xem co can canh cao khong
				visit[x - 'A'] = false;
				if (!NguyenAm(back) && NguyenAm(x)) {
					Try(ans + x, visit, c, size, x, true);
				} else {
					Try(ans + x, visit, c, size, x, false);
				}
				visit[x - 'A'] = true;
			} else if (NguyenAm(x)) {
				visit[x - 'A'] = false;
				Try(ans + x, visit, c, size, x, false);
				visit[x - 'A'] = true;
			}
		}
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	char c;
	cin >> c;
	vector<bool> visit(8, true);
	Try("", visit, c, c - '@', 'A', false);
	return 0;
}
