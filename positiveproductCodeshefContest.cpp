#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n ;
		long long pos = 0 , neg = 0 , ans = 0 , x;
		cin >> n;
		for (int i = 0 ; i < n; i++) {
			cin >> x;
			if (x < 0) {
				ans += neg;
				neg++;
			}
			else if (x > 0) {
				ans += pos;
				pos++;
			}
		}
		cout << ans << endl;


	}
}