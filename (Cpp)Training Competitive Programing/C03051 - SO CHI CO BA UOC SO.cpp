#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool OddPrime(int n) {
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void GenerateToRight(vector<int> &v, int n) {
	for (int i = v.back() + 2; i <= n; i += 2) {
		if (OddPrime(i)) {
			v.emplace_back(i);
		}
	}
}

int Ans(vector<int> v, int l, int r) {
	long long i = 0, count = 0;
	while (v[i]*v[i] <= l) {
		++i;
	}
	while (i < v.size() && v[i]*v[i] < r) {
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
		long long l, r;
		cin >> l >> r;
		GenerateToRight(prime, sqrt(r));
		cout << Ans(prime, l, r) << '\n';
	}
	return 0;
}
