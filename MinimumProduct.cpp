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
ll prod(ll a , ll b , ll x , ll y , ll n ) {
	ll t = min(n, a - x);

	a = a - t;

	n = n - t;

	t = min(n, b - y);

	b = b - t;
	return (a * b);
}

void solve() {
	ll a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	ll a1 = prod(a, b, x, y, n);
	ll a2 = prod(b, a, y, x, n);

	cout << min(a1, a2) << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
