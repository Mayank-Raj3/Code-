//      .....All...copyright....Mynk28nov.........;
#include<bits/stdc++.h>
using namespace std;
#define  int long long
#define ld long double
#define nline "\n"
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ld EPS = 1e-9;

void solve() {
	int n, q; cin >> n >> q;
	vector<int> a(n);
	for (int i = 0 ; i < n ; i++) cin >> a[i];

	sort(all(a));
	vector<int> pre(n + 1);
	for (int i = 0; i < n; ++i) {
		pre[i + 1] = pre[i] + a[i];

	}
	// for (int i = 0 ; i < n + 1; i++) {
	// cout << pre[i] << " ";
	// }
// sum till x then exclude the mhnga one i.e x-y
	//or in sidha
//  cout<<pre[n-x+y]-pre[n-x]<<endl;

	while (q--) {
		int x, y; cin >> x >> y;
		int ans = pre[x] - pre[x - y];
		cout << ans << nline;
	}

}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;
	while (t--) {
		solve();
	}
}
