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
	int n ; cin >> n ;
	if (n < 2020) {
		cout << "NO" << nline;
		return;
	}
	if (n % 2021 == 0 || n % 2020 == 0) {
		cout << "YES" << nline; return;
	}
	while (n > 0) {
		n -= 2020;
		if (n % 2021 == 0) {
			cout << "YES" << nline;
			return;
		}
	}
	cout << "NO" << nline;



}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
