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
	ll n , sum ; cin >> n ;
	sum = (n * (n + 1)) / 2;
	if (n == 1) {
		cout << -1 << nline;
		return ;
	}
	sum = sum - 2 * 3;
	ll i = 4;
	while (i <= n) {
		sum = sum - 2 * i;
		i = i * 2;
	}
	cout << sum << nline;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
