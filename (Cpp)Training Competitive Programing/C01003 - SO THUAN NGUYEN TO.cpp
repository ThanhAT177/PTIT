#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> digits = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1};

bool IsPrime(int n) {
	if (n == 2) {
		return true;
	}
	if (n % 2 == 0) {
		return false;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool OddPrime(int n) {
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool PrimeDigits(int n) {
	int sum = 0;
	while (n) {
		if (digits[n % 10]) {
			return false;
		}
		sum += n % 10;
		n /= 10;
	}
	return IsPrime(sum);
}

void GenerateToRight(vector<int> &v, int n) {
	for (int i = v.back() + 2; i <= n; i += 2) {
		if (PrimeDigits(i) && OddPrime(i)) {
			v.emplace_back(i);
		}
	}
}

int Ans(vector<int> v, int l, int r) {
	int i = 0, count = 0;
	while (v[i] <= l) {
		++i;
	}
	while (v[i] < r) {
		cout << v[i] << ' ';
		++count;
		++i;
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	vector<int> prime = {2, 3};
	while (t--) {
		int l, r;
		cin >> l >> r;
		GenerateToRight(prime, sqrt(r));
		cout << Ans(prime, l, r) << '\n';
	}
	return 0;
}
