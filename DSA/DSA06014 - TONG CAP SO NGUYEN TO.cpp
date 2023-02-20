#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

bitset<1000001> is_prime = {};

void Sieve() {
	is_prime[2] = 1;
	for (int i = 3; i <= 1e6; i += 2) {
		is_prime[i] = 1;
	}
	for (int i = 3; i <= 1e3; i += 2) {
		if (is_prime[i]) {
			for (int j = i*i; j <= 1e6; j += i) {
				is_prime[j] = 0;
			}
		}
	}
}

void SumOfTwoPrime(int n) {
	if (is_prime[n - 2]) {
		cout << 2 << ' ' << n - 2 << '\n';
		return;
	}
	for (int i = 3; i <= sqrt(n); ++i) {
		if (is_prime[i] && is_prime[n - i]) {
			cout << i << ' ' << n - i << '\n';
			return;
		}
	}
	cout << "-1\n";
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	Sieve();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		SumOfTwoPrime(n);
	}
	return 0;
}
