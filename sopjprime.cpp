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
bool isprime(int n) {
	if (n == 1) return false;
	if (n == 2 || n == 3 ) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5 ; i * i <= n ; i += 6 )
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

void solve() {
	ll n ; cin >> n ;
	if (isprime(n)) {
		cout << "YES" << nline;

	}

	else {
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
