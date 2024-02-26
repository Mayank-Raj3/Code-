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



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n ;
	cin >> n ;
	int lo = 1 , hi = n ;
	int ans = 0 ;
	while (lo - hi <= 1e-6) {
		int mid = (lo + hi ) / 2;
		int sq = mid * mid;

		if (sq == n) {
			ans = mid ;
			break;
		}
		if (sq < n ) {
			ans = mid ; lo = mid + 1 ;
		}

		else hi = mid - 1 ;

	}
	cout << ans;


}
