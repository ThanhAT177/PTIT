#include <iostream>
#include <string>
using namespace std;

main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string num1, num2;
	cin >> num1 >> num2;
	string tmp = num1;
	for (int i = 0; tmp[i]; ++i) {
		if (tmp[i] == '6') {
			tmp[i] = '5';
		}
	}
	int a = stoi(tmp);
	tmp = num2;
	for (int i = 0; tmp[i]; ++i) {
		if (tmp[i] == '6') {
			tmp[i] = '5';
		}
	}
	int b = stoi(tmp);
	cout << a + b << ' ';
	tmp = num1;
	for (int i = 0; tmp[i]; ++i) {
		if (tmp[i] == '5') {
			tmp[i] = '6';
		}
	}
	a = stoi(tmp);
	tmp = num2;
	for (int i = 0; tmp[i]; ++i) {
		if (tmp[i] == '5') {
			tmp[i] = '6';
		}
	}
	b = stoi(tmp);
	cout << a + b;
	return 0;
}
