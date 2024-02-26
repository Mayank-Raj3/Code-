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
	int x , m , n ;
	cin >> x >> m >> n ;
	if ( x < (n * 10)) {
		cout << "YES" << nline; return;
	}

	if (x % 10 == 0 && ((x / 10 ) <= n)) {
		cout << "YES" << nline; return;
	}
	while (m--) {
		x = (x / 2) + 10;
		if (x <= 0) {
			cout << "YES" << nline;
			return;
		}
	}

	if ((x - (n * 10)) <= 0) {
		cout << "YES" << nline;
	}
	else {
		cout << "NO" << nline;

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
