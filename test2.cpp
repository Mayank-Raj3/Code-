#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t;
	while (t--) {
		int n , x;
		cin >> n >> x;
		int sum = 0 ;
		for (int i = 0 ; i < n - 1 ; i++) {
			int a;
			cin >> a;
			sum = a + sum;
		}
		int ans = x * n - sum;
		if (ans > 0) {
			cout << ans << endl;
		}

		else cout << 0 << endl;

	}
}