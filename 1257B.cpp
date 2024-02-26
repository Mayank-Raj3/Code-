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
	int x , y ;
	cin >> x >> y ;

	if (x > 3) cout << "YES" << nline;
	else if (x == 1 && y == 1 ) cout << "YES" << nline;
	else if (x == 1 && y != 1 ) cout << "NO" << nline;
	else if (y <= 3) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
