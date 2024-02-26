
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long testcase;
	cin >> testcase;
	for (long long i = 0 ; i < testcase; i++) {
		long long n = 0, ans = 0;
		cin >> n;
		if (n % 2 == 0) {
			if (n % 4 == 0) {
				ans = 3 ^ n;
			}
			else {
				ans = 3;

			}

		}
		else {
			if ((n - 1) % 4 == 0) {
				ans = (3 ^ (n - 1))&n;
			}
			else {
				ans = 3;
			}
		}
		cout << ans << endl;
	}
	return 0 ;
}
