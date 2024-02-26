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
	ll n , s ; cin >> n >> s ;
	ll sum = 0 ;
	std::vector<int> a(n);
	for (int i = 0 ; i < n ; i++) cin >> a[i];
	int i = 0 , j = 0 ;		ll ans = 0 ;

	while ( j < n) {
		sum += a[j];

		while (i <= j && sum > s) {
			sum -= a[i];
			i++;
		}

		if (sum <= s)
			ans +=  (j - i + 1);




		j++;

	}
	cout << ans;



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
