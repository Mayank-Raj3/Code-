#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000010000
#define endl '\n'
int n, k;
vector<int>arr(1e5 + 10);
int check(int x) {
	int left = 0;
	int painter = 0;
	for (int i = 0; i < n ; i++) {
		if (left >= arr[i]) {
			left -= arr[i];
		}
		else {
			painter++;
			left = x;
			if (arr[i] <= left) {
				left -= arr[i];
			}
			else {return 0;}
		}
	}
	if (painter <= k) return 1;
	else return 0;
}
void solve() {
	cin >> n >> k;
	int sum = 0;
	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int lo = 1;
	int hi = sum, ans = -1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (check(mid) == 1) {
			ans = mid;
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}
	cout << ans << endl;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int _t; cin >> _t; while (_t--)
		solve();
}