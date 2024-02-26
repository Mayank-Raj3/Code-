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
	if (n % 2) // agr odd ha tho yes
	{
		cout << "YES\n";;
		return;
	}
	while (n % 2 == 0)
	{
		n /= 2; // sare 2 hata ke
	}
	if (n > 1)
		cout << "YES\n"; // fir bhi ha tho yes
	else
		cout << "NO\n"; // nhi tho no ;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
