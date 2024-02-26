#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, a;
	cin >> n >> a;
	int rhs(0), lhs(0);
	for (int i = 0 ; i < n ; i++) {
		int x; cin >> x;
		if (i <= a) {
			if (x == 1) lhs++;
		}

		else {
			if (x == 1) rhs++;


		}
	}

	cout << max(lhs, rhs);
}