#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000010000
#define endl '\n'
int n;
vector<int> g[100100];
// we have to find the maximum degree of the tree
void solve() {
	cin >> n;
	for (int i = 0; i < n ; i++) {
		g[i].clear();
	}
	for (int i = 0; i < n - 1  ; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int D = -1e9;
	for (int i = 0; i < n; i++) {
		if ( ((int)g[i].size()) > D  )
			D = (int)(g[i].size());
	}
	cout << D + 1;
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// int _t; cin>>_t;while(_t--)
	solve();
}