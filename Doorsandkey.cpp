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
	int r , g , b ;
	r = b = g = 0;
	string s ; cin >> s ;
	for (auto it : s) {
		if (it == 'r') {
			r++;
		}
		if (it == 'g') {
			g++;
		}
		if (it == 'b') {
			b++;
		}

		if (it == 'R') {
			if (r != 1) {
				cout << "NO" << nline;
				return;

			}
		}
		if (it == 'G') {
			if (g != 1) {
				cout << "NO" << nline;
				return;

			}
		}
		if (it == 'B') {
			if (b != 1) {
				cout << "NO" << nline;
				return;

			}
		}


	}
	cout << "YES" << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
