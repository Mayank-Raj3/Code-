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
	string s ; cin >> s ;
	int n = s.size();
	if (stoi(s) % 2 == 0) {
		cout << 0 << nline;
	}
	else if ((s[0] - '0') % 2 == 0 ) {
		cout << "1" << nline;
	}
	else {
		int ans = 0 ;
		for (int i = 0 ; i < n; i++ ) {
			int x = (s[i] - '0');
			// cout << x << nline;
			if ((x % 2) == 0 ) {
				ans = i ;
				break ;
			}

		}

		if (ans == 0 ) {
			cout << -1 << nline;

		} else cout << 2 << nline;
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
