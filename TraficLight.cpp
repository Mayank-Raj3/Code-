//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"
// https://codeforces.com/problemset/problem/1744/C
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int n ; cin >> n ;
	char c ; cin >> c ;

	string s ; cin >> s ;
	if (c == 'g') {
		cout << 0 << nline;
		return;
	}
	s = s + s;
	std::vector<int> gre;
	int i = 0 ;
	for (auto it : s ) {

		if (it == 'g') {
			gre.push_back(i);
		}
		i++;

	}
	int ans = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if (s[i] == c) {
			int lw = lower_bound(gre.begin(), gre.end(), i) - gre.begin();
			// cout << lw << nline;
			ans = max(ans, (gre[lw] - i));

		}
	}
	cout << ans << nline;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
