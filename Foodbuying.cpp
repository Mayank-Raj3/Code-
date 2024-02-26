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
	ll s, ans = 0, d, p; cin >> s;
	while (true) {//eg n = 35
		d = (s / 10) * 10; // left price d= 30
		ans += d; // ans = 30 ;
		p = s - d; // 35 - 30 = 5  left
		s = (s / 10) + p; // cash back(n) =  3 + 5 = 8
		if (s < 10) {
			ans += s;
			break;
		}
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
