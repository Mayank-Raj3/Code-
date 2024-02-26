#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t ;
	cin >> t;
	while (t--) {
		ll a, b, x, y;
		cin >> x >> y >> a >> b;
		ll mini = min(x, y);
		ll maxi = max(x, y);
		ll d1 = mini; // here we will apply both operation; if 2a<b the we will use 2*a or b;
		ll d2 = maxi - mini;
		ll ans = 0 ;
		if (2 * a < b) {
			ans += 2 * a * d1;
			ans += a * d2;
		}
		else {
			ans += b * d1;
			ans += a * d2;

		}
		cout << ans << endl;


	}

}