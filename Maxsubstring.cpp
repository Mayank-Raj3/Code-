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
	ll n ; cin >> n ;
	string s ; cin >> s ;
	ll x, y;
	if (n == 1) {
		cout << 1 << nline; return;
	}
	x = y = 0;
	for (auto it : s) {
		if (it == '0') x++;
		else y++;
	}
	ll cnt = 1 ;
	ll ans = 0 ;
	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1]) {
			// ans = max(cnt, ans);
			cnt = 1;
		} else {
			cnt++;
		}
		ans = max(cnt, ans);

	}
	ll ans1 = x * y;
	// ll ans2 = ans * ans;
	cout << ans << nline;
	// cout << ans1 << " " << ans2 << nline;
	// cout << max(ans1, ans2) << nline;

}







int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
