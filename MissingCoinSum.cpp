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
	ll n ; cin >> n ;
	ll v[n];
	for (ll i = 0 ; i < n ; i++) {
		cin >> v[i];
	}
	sort(v, v + n);
	ll sum = 1 ;

	for (ll i = 0 ; i < n ; i++) {
		if (sum < v[i]) {
			break;
		} else

			sum += v[i];
	}
	cout << sum << endl;



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
