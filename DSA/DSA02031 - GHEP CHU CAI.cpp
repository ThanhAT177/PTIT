#include <iostream>
#include <vector>

using namespace std;

bool NguyenAm(char c) {
	return (c == 'A' || c == 'E');
}

vector<bool> visit(8, false);

void Try(char c, bool check, int pos, string ans, int size) {
	if (pos == size) {
		cout << ans << '\n';
	}
	for (char i = 'A'; i <= c; ++i) {
		while ((check && !NguyenAm(i)) || visit[i]) {//Có dấu bị đè
			++i;
		}
		check = false;
		if (!NguyenAm(ans[pos - 1]) && NguyenAm(i)) {//Sắp bị đè
			check = true;
		}
		visit[i - 'A'] = true;
		Try(c, check, pos + 1, ans + i, size);
		visit[i - 'A'] = false;
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	char c;
	cin >> c;
	Try(c, false, 0, "", c - 'A');
	return 0;
}
