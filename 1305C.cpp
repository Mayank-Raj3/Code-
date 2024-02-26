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
	ll n , p;
	cin >> n >> p;
	if (n > p) {cout << 0; return ;}
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll res = 1;
	for (ll i = 0; i < n; i++)
		for (ll j = i + 1; j < n; j++)
			res = (res % p * (abs(a[i] - a[j])) % p) % p;

	cout << res;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
