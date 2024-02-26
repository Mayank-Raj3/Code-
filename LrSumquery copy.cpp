#include "bits/stdc++.h"
using namespace std;
#define m 1000000007
void solve() {
	long long n, ans ;
	cin >> n;
	ans = ((1ll * n * (n - 3)) % m / 2) ;
	cout <<  ((ans % m)) << "\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}