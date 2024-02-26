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
	int a, b, c;
	cin >> a >> b >> c;
	if ((2 * b - c > 0) && (2 * b - c) % a == 0)
	{
		cout << "YES" << endl;
	}
	else if ((a + c) % (2 * b) == 0)
	{
		cout << "YES" << endl;
	}
	else if ((2 * b - a > 0) && (2 * b - a) % c == 0)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
