#include <iostream>
using namespace std;

long long kq = 0;

long long Merge(int a[], int l, int m, int h) {
	int kq = 0;
	int left_size = m - l + 1, right_size = h - m;
	int *arr_left = new int[left_size];
	int *arr_right = new int[right_size];

	for (int i = 0; i < left_size; ++i) {
		arr_left[i] = a[l + i];
	}
	for (int j = 0; j < right_size; ++j) {
		arr_right[j] = a[m + 1 + j];
	}

	int left_index = 0, right_index = 0, merge_index = l;
	while (left_index < left_size && right_index < right_size) {
		if (arr_left[left_index] <= arr_right[right_index]) {
			a[merge_index] = arr_left[left_index];
			++left_index;
		} else {
			kq += left_size - left_index;// Cap nghich the
			a[merge_index] = arr_right[right_index];
			++right_index;
		}
		++merge_index;
	}
	while (left_index < left_size) {
		a[merge_index] = arr_left[left_index];
		++left_index;
		++merge_index;
	}
	while (right_index < right_size) {
		a[merge_index] = arr_right[right_index];
		++right_index;
		++merge_index;
	}
	
	delete[] arr_left;
	delete[] arr_right;
	return kq;
}

long long MergeSort(int a[], int l, int h) {
	if (l >= h) {
		return;
	}
	int m = l + (h - l)/2;
	kq += MergeSort(a, l, m);
	kq += MergeSort(a, m + 1, h);
	Merge(a, l, m, h);
	return kq;
}

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		MergeSort(a, 0, n - 1);
		for (int i = 0; i < n; ++i) {
			cout << a[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}