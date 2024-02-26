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
	string s;
	cin >> s;
	string ans;
	if (s[0] != '9')
	{
		for (int i = 0; i < n; i++)
		{
			int x = s[i] - '0';
			int y = 9 - x;
			ans += y + '0';
		}
	}
	else
	{
		int c = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			int x = s[i] - '0';
			x += c;
			if (x > 1)
			{
				int y = 11 - x;
				c = 1;
				ans += (y + '0');
			}
			else
			{
				c = 0;
				int y = 1 - x;
				ans += y + '0';
			}
		}
		reverse(ans.begin(), ans.end());
	}
	cout << ans << endl;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
