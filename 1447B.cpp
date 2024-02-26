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
	{
		int n, m;
		cin >> n >> m;
		int a[n][m]; int c = 0;
		long long  s = 0; int mi = 10000;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if (a[i][j] < 0)
					c++;
				mi = min(mi, abs(a[i][j]));
				s = s + abs(a[i][j]);
			}
		}
		if (c % 2 == 0)
			cout << s << endl;
		else cout << s - 2 * mi << endl;
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
