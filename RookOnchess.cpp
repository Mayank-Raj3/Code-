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
	int n, k;
	cin >> n >> k;
	if (k <= (n + 1) / 2) {
		vector<vector<char>> ans(n, vector<char>(n, '.'));
		int m = 0;
		for (int i = 0; i < k; i++) {
			ans[m][m] = 'R';
			m += 2;
		}
		for (auto i : ans) {
			for (auto j : i) {
				cout << j;
			}
			cout << nline;
		}
	} else {
		cout << -1 << nline;
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
