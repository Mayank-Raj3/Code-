#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

vector<int> arr;
int n ;
int dp[102][100001];
bool rec(int ind, int tar) {

	if (ind == n - 1) {
		if (tar == 0) {
			return 1 ;
		} else
		{
			return  0 ;
		}
	}
	if (dp[ind][tar] != -1) return dp[ind][tar];

	int take , notTake ;
	notTake = rec(ind + 1, tar);
	take = rec(ind + 1, tar - arr[ind]);

	return dp[ind][tar] = notTake or take;
}
vector<vector<int>> ans ;
vector<int> temp;
void printSet(int ind , int tar) {
	if (ind == n - 1 ) {
		return ;
	}

	if (rec(ind + 1, tar)) {
		printSet(ind + 1, tar);
	} else if (rec(ind + 1, tar - arr[ind])) {
		temp.push_back(ind);
		printSet(ind + 1, tar - arr[ind]);
	}


}
vector<vector<int>> subset_queries(vector<int> &a, vector<int> &q) {
	ans.clear();
	temp.clear();
	arr = a;
	n = a.size();
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < n ; i++) cin >> arr[i];

	int  qs = q.size();

	for (int i = 0 ; i < qs ; i++) {
		int tar = q[i];
		if (rec(0, tar)) {
			printSet(0, tar);
			ans.push_back(temp);
			temp.clear();
		} else {
			ans.push_back({ -1});
		}
	}	return ans;
}


void solve() {
	int N, Q;
	cin >> N >> Q;
	vector<int> arr(N);
	for (int i = 0; i < N; i++)cin >> arr[i];
	vector<int> queries(Q);
	for (int i = 0; i < Q; i++)cin >> queries[i];
	auto ans = subset_queries(arr, queries);

	// checker.
	if (ans.size() != Q) {
		cout << 101 << endl;
		return;
	}
	for (int i = 0; i < Q; i++) {
		auto x = ans[i];
		if (x.size() == 0) {
			cout << 101 << endl;
			continue;
		}
		if (x.size() == 1 && x[0] == -1) {
			cout << -1 << endl;
			continue;
		}
		ll sum = 0, p = -10;
		for (auto y : x) {
			if (y < 0 || y >= N || p >= y ) { // valid 0-indexed.
				sum = -1111;
				break;
			}
			p = y;
			sum += arr[y];
		}
		if (sum == queries[i]) {
			cout << 1 << endl;
		}
		else cout << 101 << endl;
	}
}
int main() {
	ios_base :: sync_with_stdio(0);
	cin.tie(nullptr); cout.tie(nullptr);

#ifdef Mastermind_
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	// int i = 1;
	// cin >> t;
	while (t--) {
		// cout << "Case #" << i << ": ";
		solve();
		// i++;
	}
	return 0;
}