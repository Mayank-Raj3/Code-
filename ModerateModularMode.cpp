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
	ll x , y;
	cin >> x >> y;
	if (y % x == 0) {
		cout << x << nline;
	}

	else if (y < x) {
		cout << x + y << nline;

	}
	else {
		cout << y - y % x / 2 << '\n';
	}


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll t ; cin >> t;
	while (t--) {
		solve();
	}
}
