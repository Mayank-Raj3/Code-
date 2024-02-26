//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  ll int long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int n ; cin >> n ;
	std::vector<ll> b(n);
	ll sum = 0 ;
	for (int i = 0 ; i < n ; i ++)
	{	int  x ; cin >> x ; sum += x;
	}
	for (int i = 0 ; i < n ; i ++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end() );

	for (int i = 0; i < n - 1; i++)
		sum += b[i]; //0 3 5 6
	//  ^
	// left se start kar rhe
	cout << sum << nline;



}

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
