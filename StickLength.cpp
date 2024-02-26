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


// binary seach will not work ,since check funtion will not work ;

void solve() {
	ll n ; cin >> n ;
	ll arr[n];
	for (ll i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr, arr + n);

	ll median = arr[n / 2];

	ll sum = 0 ;
	for (int i = 0 ; i < n ; i++) {
		sum += abs(arr[i] - median);
	}

	cout << sum;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}