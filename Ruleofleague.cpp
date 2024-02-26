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
	int n , x , y ; cin >> n >> x >> y;
	int mini = min(x, y); int maxi = max(x, y);
	if ( mini != 0 || (x == 0 && y == 0 ) ) {
		cout << -1 << nline;
		return;
	}
	else if ((n - 1) % maxi != 0) {
		cout << -1 << nline;
		return;
	}
	else {
		for (int i = 2; i <= n; i += maxi)
		{
			for (int j = 1; j <= maxi; j++)
				cout << i << " ";
		}
		cout << endl;
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
