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

	int n;
	cin >> n;
	vector<int> v(n), ans(n);
	for (auto &it : v)
		cin >> it;

	ans[0] = v[0];
	bool flag = true;
	for (int i = 1; i < n; i++)
	{
		int temp1 = ans[i - 1] + v[i];
		int temp2 = ans[i - 1] - v[i];
		if (temp1 >= 0 && temp2 >= 0 && temp1 != temp2)
		{
			cout << -1 << endl;
			return;
		}
		ans[i] = max(temp1, temp2);
	}
	if (flag)
	{
		for (auto it : ans)
			cout << it << " ";
		cout << endl;
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
