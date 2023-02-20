#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

vi::iterator LowerBound(vi::iterator first, vi::iterator last, int x) {
	auto size = distance(first, last);
	while (size > 0) {
		auto half = size/2;
		auto mid = first + half;
		if (*mid <= x) {
			first = mid + 1;
			size -= half + 1;
		} else {
			size = half;
		}
	}
	return first - 1;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	vi v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		auto it = LowerBound(v.begin(), v.end(), n);
		int count = 0;
		while (n) {
			while (n >= *it) {
				n -= *it;
				++count;
			}
			it = LowerBound(v.begin(), it, n);
		}
		cout << count << '\n';
	}
	return 0;
}
