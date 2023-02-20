#include<iostream>
using namespace std;

void HanoiTower(int n, char from_rod, char aux_rod, char to_rod) {
	if (n == 1) {
		cout << from_rod << " -> " << to_rod << '\n';
		return;
	}
	HanoiTower(n - 1, from_rod, to_rod, aux_rod);
	cout << from_rod << " -> " << to_rod << '\n';
	HanoiTower(n - 1, aux_rod, from_rod, to_rod);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	HanoiTower(n, 'A', 'B', 'C');
	return 0;
}
