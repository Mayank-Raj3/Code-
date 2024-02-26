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
	int n , m ;
	cin >> n >> m ;
	vector<int>  v(m);

	multiset<int>me;


	for (int i = 0 ; i < n ; i++) {

		int a;
		cin >> a;
		me.insert(a);
	}

	for (int i = 0 ; i < m ; i++) {
		cin >> v[i];
	}

	for (int i = 0 ; i < m ; i++)
	{
		auto it = me.lower_bound(v[i]);
		if (*it == v[i])
		{
			cout << *it << "\n";
			me.erase(it);
		}
		else if (*it > v[i] && it != me.begin())
		{
			it--;
			cout << *it << "\n";
			me.erase(it);
		}
		else if (it == me.end() && me.size() > 0)
		{
			it--;
			cout << *it << "\n";
			me.erase(it);
		}
		else
		{
			cout << -1 << "\n";
		}

	}
}



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int  t   = 1;

	while (t--) {
		solve();
	}
}
