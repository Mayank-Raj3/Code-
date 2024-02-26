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
	ll n, gc;
	cin >> n;
	std::vector<ll> a(n);
	for (int i = 0 ; i < n ; i++)
		cin >> a[i];
	gc = a[0];
	for (int i = 1 ; i < n ; i++) {
		gc = __gcd(gc, a[i]);
	}
	// pure array ka gcd 1 ha tho 0 ;
	if (gc == 1) {
		cout << 0 << nline;
		return;
	}

	ll gc2 = gc;
	gc2 = __gcd(gc2, n);
	cout << gc << " " << n << nline;
	if (gc2 == 1) {
		cout << 1 << nline;
		return;
	}

	ll gc3 = gc;
	gc3 = __gcd(gc3, n - 1);
	if (gc3 == 1) {
		cout << 2 << nline;

		return;
	}

	cout << 3 << nline;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
