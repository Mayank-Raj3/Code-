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
	int n , k , r , c ; cin >> n >> k >> r >> c;
	--r, --c;
	int x = r , y = c;

	vector<vector<char>> a(n, vector<char>(n, '.') );

	a[r][c] = 'X';
	while (x >= 0) {
		for (int i = y ; i < n ; i += k) a[x][i] = 'X';
		for (int i = y ; i >= 0 ; i -= k) a[x][i] = 'X';

		x = x - 1, y = y + 1;
		if (y >= n) {
			y = 0;
		}
	}

	x = r, y = c;
	while (x < n) {
		for (int i = y ; i < n ; i += k) a[x][i] = 'X';
		for (int i = y ; i >= 0 ; i -= k) a[x][i] = 'X';
		x = x + 1; y = y - 1;
		if (y < 0) y = n - 1;

	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) cout << a[i][j];
		cout << nline;
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
