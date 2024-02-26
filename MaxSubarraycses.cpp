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
	ll arr[n];
	bool ok = false;
	for (ll i = 0 ; i < n ; i++) {
		cin >> arr[i];

	}
	if (n == 1) {
		cout << arr[0]; return;
	}
	if (n == 2 && (arr[0] < 0) && (arr[1] < 0) ) {
		cout << max(arr[0], arr[1]);
		return;

	}

	for (int i = 0 ; i < n - 1 ; i++) {
		if (arr[i] == arr[i + 1] && arr[i] < 0) {
			ok = true;
		}
	}
	if (ok  ) {
		sort(arr, arr + n , greater<int>());
		cout << arr[0];
		return;
	}
	else {
		ll maxi = 0, cur = 0 ;
		for (ll i = 0 ; i < n ; i++) {
			cur += arr[i];
			if (cur > maxi) {
				maxi = cur;
			}
			if (cur < 0) {
				cur = 0;
			}
		}
		cout << maxi;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
