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

string solve()
{
	ll n;
	cin >> n;
	ll arr[n], brr[n];
	for (ll i = 0; i < n; i++) cin >> arr[i];
	for (ll i = 0; i < n; i++) cin >> brr[i];

	int flag = 1;
	for (ll i = 0; i < n; i++)
	{
		if (arr[i] == brr[i]) continue;
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag) return "YES\n";

	for (ll i = 0; i < n; i++)
	{
		if (arr[i] > brr[i]) return "NO\n";
	}

	for (ll i = 0; i < (n - 1); i++)
	{
		if (arr[i] == brr[i]) continue;
		else
		{
			if ((brr[i] - brr[i + 1]) > 1) return "NO\n";
		}
	}
	if (arr[n - 1] == brr[n - 1]) return "YES\n";
	else
	{
		if ((brr[n - 1] - brr[0]) > 1) return "NO\n";
		return "YES\n";
	}


}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		cout << solve();
	}
}
