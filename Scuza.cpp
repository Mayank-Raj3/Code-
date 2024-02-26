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
	ll t, n, q, i, j, s, k;
	cin >> n >> q;

	ll a[n];
	ll ans[q];
	vector<pair<ll, ll>> qu;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < q; i++)
	{
		cin >> k;
		qu.push_back({k, i});
	}

	sort(qu.begin(), qu.end());

	s = 0;
	j = 0;
	for (i = 0; i < q; i++)
	{
		while (j < n)
		{
			if (a[j] <= qu[i].first) {
				s = s + a[j];
				j++;
			} else {
				break;
			}
		}
		ans[qu[i].second] = s;
	}

	for (i = 0; i < q; i++) {
		cout << ans[i] << " ";
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
