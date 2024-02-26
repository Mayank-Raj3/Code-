#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define ld long double
#define nline "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
bool check(vector <ll> arr , ll n , ll mid , ll k ) {
	int sub = 1 ; ll sum = 0 ;

	for (int i = 0 ; i < n ; i++) {
		if (arr[i] > mid) return false;  // agr arr[i] ka jada hua mid se tho return false
		if (sum + arr[i] > mid) { // sum + arr[i] se jada hua tho new sub arrqay
			++sub;
			sum = 0;
		}
		sum += arr[i]; // increase kar rhe ;
	}


	return sub <= k; // agr k ya k se kab tho return true ;
}


void solve() {
	ll n  , k; cin >> n >> k ;
	std::vector<ll> arr(n);
	ll hi = 0;
	for (ll i  = 0  ; i < n ; i++) {cin >> arr[i]; hi += arr[i]; }
	// hi can be the max sum of the array in case one only one sub array
	ll lo = 0 ; // 0 sum
	ll ans = 0 ;
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		if (check(arr, n, mid, k)) {
			ans = mid ;
			hi = mid - 1; // kam kar rhe sum of subarray
		}
		else {
			lo = mid + 1 ;
		}
	}

	cout << ans;



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; t = 1;

	while (t--) {
		solve();
	}
}
