#include <iostream>
#include <vector>

using namespace std;

void Try(int a[], int n, int pos, vector<int> ans) {
	if (ans.size() == 0) {//Tìm phần tử nhỏ nhất lớn hơn a[pos]
		int min = 9999, sec_min_index = -1;
		for (int i = 0; i < n; ++i) {
			if (a[i] < min && a[i] > a[pos]) {
				min = a[i];
				sec_min_index  = i;
			}
		}
		if (sec_min_index == -1) {
			return;
		}
		pos = sec_min_index;
	}
//	cout << a[pos] << '\n';
	ans.emplace_back(a[pos]);
	int pre_pos = -1;
	for (int h = n - 1; h > pos; --h) {
		if (a[h] > a[pos]) {
			for (int x : ans) {
				cout << x << ' ';
			}
			cout << a[h] << '\n';
			pre_pos = h;
		}
	}
	if (pre_pos == -1) {
		return;
	}
	Try(a, n, pre_pos, ans);
	ans.pop_back();
	if (ans.size() == 0) {
		Try(a, n, pos, ans);
	}
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	a[n] = -1;
	Try(a, n, n, {});
	return 0;
}