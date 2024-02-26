#include <bits/stdc++.h>
using namespace std;



int main() {
	int n; cin >> n;
	int pos(0), neg(0), even(0), odd(0);
	for (int i = 0; i < n; i++) {
		int x  ; cin >> x;
		if (x > 0) {
			pos++;
		}
		else if (x < 0) {
			neg++;
		}
		if (x % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}
	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;
	return 0;
}