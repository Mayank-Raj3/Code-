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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
//   a/b = c/d
// ad , bc
//
	ll p1 = a * d, p2 = b * c;
	if (p1 == p2)
		cout << "0" << nline;
	else if (p2 != 0 && p1 % p2 == 0 || p1 != 0 && p2 % p1 == 0)
		cout << "1" << nline;
	else
		cout << "2" << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
