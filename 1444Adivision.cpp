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
	ll a , b ; cin >> a >> b;
	if (a % a == 0 && a % b != 0) {
		cout << a << nline;
	}
	else {
		for (ll i = b  ;  i >= 1 ; i-- ) {
			if (a % i == 0 && i % b != 0) {
				cout << i << " " << nline;
				return;
			}

		}

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
