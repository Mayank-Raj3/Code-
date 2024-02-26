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
	ll n;
	cin >> n ;
	if (n <= 2)cout << -1;
	else if (n % 2)
		cout << (n * n - 1) / 2 << ' ' << (n * n + 1) / 2 << endl;
	else
		cout << (n * n / 2 - 2) / 2 << ' ' << (n * n / 2 + 2) / 2 << endl;
	return ;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
