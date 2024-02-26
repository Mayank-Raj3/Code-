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
	int x , y ;
	int n , h , m ; cin >> n >> h >> m ;
	int time = h * 60 + m; // changing in min
	int ans = 24 * 60;

	while (n--) {
		cin >> h >> m;
		int t = 60 * h + m - time; // diff b/w times
		if (t < 0) t += 24 * 60; // time cant be negatinve
		ans = min(ans, t); // minimum will be the ans
	}

	cout << ans / 60 << " " << ans % 60 << nline; // back to hours ;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
