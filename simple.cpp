#include<bits/stdc++.h>
using namespace std ;
#define jay_shri_ram                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int 						  long long
int mod = 1e9 + 7;
int dp[1001000];


int f(vector<int> &arr, int n) {
	if (n == 0) {
		return 1ll;
	}

	if (dp[n] != -1) return dp[n];

	int cnt = 0;
	for (auto i : arr) {
		if (n - i >= 0) {
			cnt = (cnt % mod + f(arr, n - i) % mod ) % mod;
		}
	}
	dp[n] = cnt;
	return dp[n];
}

void solve() {
	int n , sum ; cin >> n >> sum ;
	vector<int> arr(n);
	memset(dp, -1, sizeof(dp));
	for (int i = 0 ; i < n ; i++) cin >> arr[i];

	cout << f(arr, sum) << endl;


}
int32_t main() {
	jay_shri_ram;
	solve();
}