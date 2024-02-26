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
	int l, r , c   ; cin >> l >> r >> c ;
	if (l / c == r / c ) {
		cout << ( r / c + r % c) << nline; // agr quotient same tho
		// right vale ka rem zada ayega ;
	}

	else {
		cout << max(r / c + r % c, (r / c - 1 + c - 1)) << nline;
		// since %n can givevalue till n-1 ;

	}



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
