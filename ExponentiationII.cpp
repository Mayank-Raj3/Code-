//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}


const int MAX_N = 1e5 + 5;
const ll mod = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	// (a^(b^c% mod-1))%mod
	ll a , b , c ; cin >> a >> b >> c ;
	cout << expo(a, expo(b, c, mod - 1), mod) << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t ; cin >> t;
	while (t--)
		solve();
}

