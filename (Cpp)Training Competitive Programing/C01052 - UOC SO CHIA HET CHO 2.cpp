#include <iostream>
#include <cmath>
using namespace std;

int DevideForTwo(int n) {
	if (n & 1) {
		return 0;
	}
	int total = 0;
	while (n % 2 == 0) {
		++total;
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		int count_even = 1;
		while (n % i == 0) {
			++count_even;
			n /= i;
		}
		total *= count_even;
	}
	if (n > 1) {
		total *= 2;
	}
	return total;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << DevideForTwo(n) << '\n';
	}
	return 0;
}
