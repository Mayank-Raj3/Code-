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
bool check(ll mid, vector<ll> v, ll k, ll n ) {
	ll cnt = 0;
	for (ll i = 0; i < n; i++) {
		cnt += (mid / v[i]);
		if (cnt >= k) break;
	}
	return (cnt >= k);
}


void solve() {
	ll n, k, ans = 0;
	cin >> n >> k;
	vector<ll> v;
	for (ll i = 0; i < n; i++) {
		ll m;
		cin >> m;
		v.push_back(m);
	}
	sort(v.begin(), v.end());
	ll low = 0, high = 1e18;
	while (low <= high) {
		ll mid = (low + high) / 2;
		if (check(mid, v, k , n)) {
			ans = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	cout << ans << endl;
}



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
}
