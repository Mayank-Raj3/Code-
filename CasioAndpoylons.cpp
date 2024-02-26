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
	int  a = 0, n, paisa = 0, energy = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int y;
		cin >> y;
		energy += a - y;
		if (energy < 0) {
			paisa += -energy;
			energy = 0;
		}
		a = y;
	}
	cout << paisa << "\n";

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;

	while (t--) {
		solve();
	}
}
