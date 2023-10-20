#include <bits/stdc++.h>
using namespace std;


#define ll int64_t
int n;
vector<int> arr;
int dp[102][100100];
int rec(int i, int tar) {
	if (tar < 0)return 0;

	if (i == n ) {
		if (tar == 0) return 1;
		return 0;
	}

	if (dp[i][tar] != -1)return dp[i][tar];

	return dp[i][tar] = rec(i + 1, tar - arr[i]) | rec(i + 1, tar);
}
vector<int>temp;
vector<vector<int>>ans;
void printSet(int i, int tar) {
	if (i == n) {
		return;
	}

	if (rec(i + 1, tar - arr[i])) {
		temp.push_back(i);
		printSet(i + 1, tar - arr[i]);
	}
	else {
		printSet(i + 1, tar);
	}
}
vector<vector<int>> subset_queries(vector<int> &a, vector<int> &queries) {
	arr = a;
	n = a.size();
	memset(dp, -1, sizeof(dp));
	for (auto i : queries) {
		temp.clear();
		if (rec(0, i)) {
			printSet(0, i);
		}
		else {
			temp.push_back(-1);
		}
		ans.push_back(temp);
	}
	return ans;
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