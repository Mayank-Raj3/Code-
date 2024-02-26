#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int initial = 1;

	long long sum = 0;

	for (int i = 0; i < m; i++) {
		int present;
		cin >> present;

		if (present >= initial) {
			sum += present - initial;
		} else {
			sum += n - (initial - present);
		}
		initial = present;
	}
	cout << sum;
	return 0;
}