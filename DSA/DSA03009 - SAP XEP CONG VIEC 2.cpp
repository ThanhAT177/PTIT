#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Task {
	int job_id, deadline, profit;
};

bool Cmp(Task a, Task b) {
	return a.profit > b.profit;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Task a[n];
		int max_deadline = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i].job_id >> a[i].deadline >> a[i].profit;
			if (a[i].deadline > max_deadline) {
				max_deadline = a[i].deadline;
			}
		}
		vector<bool> work_time(max_deadline + 1, false);//Random
		sort(a, a + n, Cmp);
		int cnt = 0, value = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = a[i].deadline; j > 0; --j) {
				if (!work_time[j]) {
					work_time[j] = true;
					++cnt;
					value += a[i].profit;
					break;
				}
			}
		}
		cout << cnt << ' ' << value << '\n';
	}
	return 0;
}
