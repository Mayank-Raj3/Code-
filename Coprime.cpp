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
	int n ; cin >> n  ;
	vector<int> a(1001, -1);
	for (int i = 0 ; i < n ; i++) {
		int x ; cin >> x;
		a[x] = i; // agr ha tho != -1 hoga
		// index store kar rhe
	}
	int ans = - 1;
	for (int i = 1 ; i < 1001; i++) {
		if (a[i] != -1) { // agr nhi ha tho
			for (int j = 0 ; j < 1001 ; j++) {
				if (a[j] != -1 && __gcd(i, j) == 1) { // agr gcd of (i,j )==1 kyuki i , j he element ha
					ans = max(ans, (a[i] + a[j]));
				}
			}
		}
	}

	if (ans == -1 ) {
		cout << ans << nline; return;
	}
	cout << ans + 2 << nline;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
