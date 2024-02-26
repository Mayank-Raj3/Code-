//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	ll n ; cin >> n;
	ll sum = 0 ;
	ll maxi = -10000;
	for (int i = 0 ; i < n ; i++) {
		int x ; cin >> x ;
		sum += x;
		if (x > maxi) {
			maxi = x;
		}
	}


	ll ans = sum / (n - 1);
	if (sum % (n - 1) > 0) ans++;
	if (ans < maxi) {ans = maxi;}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t  = 1;

	while (t--) {
		solve();
	}
}

