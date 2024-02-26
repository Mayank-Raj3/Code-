#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
using ll = long long;
const ll MOD = 1e9 + 7;
ll partialPrefixSum[int(1e6 + 5)] = {0};
ll likedByStudTillI[int(1e6 + 5)] = {0};

void solve()
{
	ll n, k, q;
	cin >> n >> k >> q;

	for (int i = 1; i <= n; i++)
	{
		ll l, r;
		cin >> l >> r;

		partialPrefixSum[l] += 1;
		partialPrefixSum[r + 1] -= 1;

	}

	// each block of partialPrefixSum is telling how many students likes that ith number
	for (int i = 1; i <= int(1e6 + 3); i++)
	{
		partialPrefixSum[i] = partialPrefixSum[i] + partialPrefixSum[i - 1];
	}

	for (int i = 1; i <= int(1e6 + 3); i++)
	{
		if (partialPrefixSum[i] >= k)
		{
			likedByStudTillI[i] = 1 + likedByStudTillI[i - 1];
		}
		else
		{
			likedByStudTillI[i] = likedByStudTillI[i - 1];
		}
	}

	while (q--)
	{
		ll l, r;
		cin >> l >> r;
		ll ans = likedByStudTillI[r] - likedByStudTillI[l - 1];
		cout << ans << endl;
	}
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t = 1;
	// cin >> t;
	for (ll i = 0; i < t; i++)
		solve();
	return 0;
}