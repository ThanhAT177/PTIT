#include <iostream>
#include <algorithm>

using namespace std;

int Max(int a, int b) {
	return a > b ? a : b;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int num1 = a[0]*a[1], num2 = a[n - 1]*a[n - 2];
	cout << Max(Max(num1, num2), Max(num2*a[n - 3], num1*a[n - 1]));
	return 0;
}
