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
	int n, cnt1 = 0, cnt2 = 0;

	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] == 1)
			cnt1++;
		else
			cnt2++;
	}

	cnt2 += (cnt1 / 2);
	int cnt = cnt1 % 2;
	if (cnt2 % 2 == 0 and cnt == 0) // sum even and no of 1 should be even ;
		cout << "YES" << endl;
	else if (cnt2 % 2)// agr odd
	{
		if (cnt1 % 2 == 0 and cnt1 != 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
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
