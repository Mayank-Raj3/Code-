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





ll lcm(ll a , ll  b ) {


	return (a * b) / (__gcd(a, b));
}

// sabse phle x k factor se divide kardo ;
//


void solve() {
	ll n ; cin >> n ;
	ll ans = 1;
	for (ll i = 1 ; i * i < n ; i++) {
		if (n % i == 0 && lcm(i, n / i) == n) {
			ans = i ;
		}


	}
	cout << ans << " " << n / ans;



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
