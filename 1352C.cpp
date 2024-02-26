#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main() {
	ll t, n, k ;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ll x = (k ) / (n - 1);
		if ((k + x) % n == 0) {
			cout << k + x - 1 << endl;

		}
		else cout << k + x << endl;
	}

}