#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
bool check(vector<int> arr , int mid , int cow , int n ) {
	ll cnt = 1 , cord = arr[0];
	for (ll i = 1 ; i < n ; i++) {
		if (arr[i] - cord >= mid) {
			cnt++ ;
			cord = arr[i];
		}
		if (cnt == cow) return true;

	}

	return false;
}
void solve() {
	ll n , cow; cin >> n >> cow;
	std::vector<int> arr(n);
	for (ll i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	ll lo = 1, hi =  arr[n - 1] - arr[0];
	ll ans = 0 ;
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		if (check(arr, mid, cow, n)) {
			ans = mid;
			lo = mid + 1 ;
		}
		else {
			hi = mid - 1 ;
		}
	}

	cout << ans << nline;



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
