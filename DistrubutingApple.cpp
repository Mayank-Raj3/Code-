#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll a , b ; cin >> a >> b;

	if (a - 1 > a + b - 1 ) {
		cout << 0 << nline ;
		return 0 ;
	}

	vector<ll> f(a + b);

	f[0] = f[1] = 1;
	for (ll i = 2; i <= a + b ; i++) {
		f[i] = (f[i - 1] * i ) % MOD;
	}
	ll res = f[a + b - 1];

	res = (res * (expo(f[a - 1], MOD - 2, MOD))) % MOD;
	res = (res * (expo(f[b], MOD - 2, MOD))) % MOD;
	cout << res << nline;



}
