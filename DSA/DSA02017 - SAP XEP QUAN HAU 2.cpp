#include <iostream>
#include <cmath>

using namespace std;

int n, count;
int a[8][8];

bool Check(int row) {
    for (int i = 0; i < row; i++) {
        if (a[i] == a[row] || abs(a[i] - a[row]) == abs(i - row))
            return false;
    }
    return true;
}

void PutQueen(int row) {
    if (row == n) {
        ++count;
        return;
    }
    for (int i = 0; i < n; i++) {
        a[row] = i;
        if (Check(row)) {
        	PutQueen(row + 1);
		}
    }
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		count = 0;
		cin >> n;
		PutQueen(0);
		cout << count << endl;
	}
	return 0;
}