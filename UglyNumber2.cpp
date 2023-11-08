class Solution {
public:
	int minFallingPathSum(vector<vector<int>>& mat) {
		int n = mat.size();
		vector<vector<int>> dp(n, vector<int>(n, 0));
		for (int i = 0; i < n; i++) {
			dp[n - 1][i] = mat[n - 1][i];
		}
		auto check = [&](int i, int j) {
			if (i >= n or j >= n or i < 0 or j < 0) return false;
			return true;
		};
		for (int i = n - 2; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				int a = 1e9, b = 1e9, c = 1e9;
				if (check(i + 1, j - 1)) {
					a = dp[i + 1][j - 1];
				}
				if (check(i + 1, j)) {
					b = dp[i + 1][j];
				}
				if (check(i + 1, j + 1)) {
					c = dp[i + 1][j + 1];
				}
				dp[i][j] = mat[i][j] + min({a, b, c});
			}
		}
		int mini = *min_element(dp[0].begin(), dp[0].end());

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}

		return mini;
	}
};
