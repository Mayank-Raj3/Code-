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
	int a , b, c ; cin >> a >> b >> c;

	int t1 = a - 1;
	int t2 = abs(c - b ) +  abs(c - 1 );
	if (t1 == t2) cout << 3 << nline;
	else if (t1 < t2) cout << 1 << nline;
	else cout << 2 << nline;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
