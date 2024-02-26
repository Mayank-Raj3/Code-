#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
ll f[1000001];
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}

void solve() {
	ll a , b ; cin >> a >> b;

	if (b > a ) {
		cout << 0 << nline ;
		return;
	}
	ll res = f[a];

	res = (res * (expo(f[b], MOD - 2, MOD))) % MOD;
	res = (res * (expo(f[a - b], MOD - 2, MOD))) % MOD;
	cout << res << nline;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	f[0] = f[1] = 1;
	for (ll i = 2; i <= 1000000 ; i++) {
		f[i] = (f[i - 1] * i ) % MOD;
	}

	while (t--) {
		solve();
	}
}
