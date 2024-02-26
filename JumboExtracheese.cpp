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
	ll maxi = -INF;
	ll n ; cin >> n;
	std::vector<ll> mini;
	for (ll i = 0 ; i < n ; i++) {
		ll x , y; cin >> x >> y;
		ll temp_max = max(x, y);
		maxi = max(temp_max, maxi);
		mini.push_back(min(x, y));
	}

	ll sum = 0  ;
	for (auto it : mini ) {
		sum = it + sum;
	}
	sum *= 2;
	sum += 2 * maxi;
	if (maxi == -INF) {
		cout << 0 << nline;
	}
	else

		cout << sum << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
