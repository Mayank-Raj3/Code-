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
	std::vector<ll> arr(n);
	for (ll i = 0 ; i < n ; i ++) {
		cin >> arr[i];
	}
	ll k = 0 ;
	for (ll i = 0 ; i < n - 1 ; i++) {
		if (arr[i] > i ) {
			k = arr[i] - i;
			arr[i] = arr[i] - k;
			arr[i + 1] = arr[i + 1] + k;

		}
	}

	for (ll i = 1 ; i < n ; i++) {
		if (arr[i] <= arr[i - 1]) {
			cout << "NO" << nline;
			return;
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
