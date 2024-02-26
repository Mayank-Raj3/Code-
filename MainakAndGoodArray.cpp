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
	int n ;
	cin >> n ;

	vector<int >v(n) ;
	for (auto &x : v) {
		cin >> x ;
	}

	int ans = 0 ;
	for (int i = 1 ; i < n ; i++) {
		ans = max(v[i - 1] - v[i], ans) ;
		// ans = max(v[i] - v[i - 1],ans) ;
	}
	for (int i = 1 ; i < n ; i++) {
		ans = max(v[i] - v[0], ans) ;
	}
	for (int i = 0 ; i < n - 1 ; i++) {
		ans = max(v[n - 1] - v[i], ans) ;
	}
	cout << ans << nline ;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
