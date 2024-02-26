#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define nline "\n"
#define ps(x, y) fixed << setprecision(y) << x
#define all(var) var.begin(), var.end()
#define pb push_back
void solve() {
	int n ; cin >> n ;
	vector<int> arr(n);
	int cnt = 0 ;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	for (int i  = 1 ; i < n ; i++) {
		if (arr[i] >= arr[i - 1]) {
			continue;
		} else {
			cnt += (arr[i - 1] - arr[i]);
			arr[i] = max(arr[i - 1], arr[i]);
		}
	}
	cout << cnt << nline;
	for (auto it : arr) {
		cout << it << " ";
	}

}
signed main() {
	int t ; cin >> t ; while (t--)
		solve();
}