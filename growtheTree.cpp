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
	ll n; cin >> n; ll ar[n];
	ll h = 0;
	ll v = 0;
	for (ll i = 0; i < n; i++) {
		cin >> ar[i];
	}
	sort(ar, ar + n );

	for (ll i = 0; i < (n ) / 2; i++) {
		h += ar[i];
	}
	for (ll i = (n ) / 2; i < n; i++) {
		v += ar[i];
	}

	ll ans = h * h + v * v;

	cout << ans << nline;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
