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
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}

void solve() {

	ll n;
	cin >> n;
	ll arr[n];
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	ll g = arr[0];
	ll ans = 0;
	for (int i = 2; i < n; i++)
	{
		if (i % 2 == 0)g = gcd(g, arr[i]);
	}

	bool ok = true;
	for (int i = 1; i < n; i += 2)
	{
		if (arr[i] % g == 0)
		{
			ok = false;
			break;
		}
	}
	if (ok)
	{
		cout << g << "\n";
		return;
	}
	g = arr[1];
	for (int i = 2; i < n; i++)
	{
		if (i % 2 == 1)g = gcd(g, arr[i]);
	}
	ok = true;
	for (int i = 0; i < n; i += 2)
	{
		if (arr[i] % g == 0)
		{
			ok = false;
			break;
		}
	}
	if (ok)
	{
		cout << g << "\n";
		return;
	}
	cout << "0\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t ; cin >> t;

	while (t--) {
		solve();
	}
}
