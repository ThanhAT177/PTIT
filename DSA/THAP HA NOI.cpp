#include <iostream>

using namespace std;

void HaNoi(int n, char from, char to, char aux) {
	if (n == 1) {
		cout << from  << " -> " << to << '\n';
		return;
	}
	HaNoi(n - 1, from, aux, to);
	cout << from  << " -> " << to << '\n';
	HaNoi(n - 1, aux, to, from);
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	HaNoi(n, 'A', 'C', 'B');
	return 0;
}
