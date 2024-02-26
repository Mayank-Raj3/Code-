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
	ll n , a, b ;
	cin >> n  >> a >> b ;

	if (a == 1) {
		if ((n - 1) % b == 0) {
			cout << "YES" << nline;

		}
		else cout << "NO" << nline;
		return;


	}



	else {
		ll N = 1;
		while (N <= n) {
			if ((n - N) % b == 0) {
				cout << "YES" << nline;
				return;
			}

			N = N * a;
		}

		cout << "NO" << nline;


	}



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}

/*
n , 1 hoga he set mea ;
tho   1 * a*a*a    +  (b+b+b) = n ban rha ;
          ^			 // xtimes b
      ( N lelenge) + b*x  = n;
      agr n-N % b ,   divisible hua tho possible ha ,
      aur agr nhi ha tho NO ;
*/