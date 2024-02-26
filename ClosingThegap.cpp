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
	int sum = 0 ;
	// bool ok = 0;
	int m  ;

	for (int i = 0 ; i < n ; i++)
	{
		int x ; cin >> x ;
		sum += x ;
	}

	if (sum % n != 0) cout << 1 << "\n";
	else cout << 0 << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
