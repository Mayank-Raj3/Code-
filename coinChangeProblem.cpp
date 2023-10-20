Coin change problem


class Solution {
public:
	int dp[10004];
	//state :- minimum coins needed for making a sum x
	// transition :- take or not take
	int rec(vector<int> &coins , int amount  ) {
		if (dp[amount] != -1) return dp[amount] ;
		if (amount == 0) return 0 ;
		int ans = 1e9;
		for (auto it : coins) {
			if (amount - it >= 0)
				ans = min(ans + 0ll, rec(coins, amount - it) + 1ll);
		}
		return dp[amount] = ans ;
	}
	int coinChange(vector<int>& coins, int amount) {
		memset(dp, -1, sizeof(dp));
		int an = rec(coins, amount);
		return an == 1e9 ? -1 : an;
	}
};


2d Dp
_____


class Solution {
public:
	int dp[14][10002];
	// state :- i- index of array , j min coin req to make sum x
	// transition ;-  take this index or not take this index
	vector<int> coins;

	int rec(int lev, int x) {
		if (x < 0) return 1e9;
		if (dp[lev][x] != -1) return dp[lev][x];
		//base case
		if (lev == coins.size() - 1) {
			if (x % coins[lev] == 0) {
				return x / coins[lev];
			} else {
				return 1e9 ;
			}
		}

		int ans = 1e9 ;

		// take
		int take = rec(lev, x - coins[lev]) + 1;
		int nottake = rec(lev + 1, x);
		ans = min(take , nottake);

		return dp[lev][x] = ans ;

	}
	int coinChange(vector<int>& coin, int amount) {
		coins = coin ;
		for (int i = 0 ; i < 14 ; i++) {
			for (int j = 0 ; j <= 10001 ; j++) {
				dp[i][j] = -1;
			}
		}
		int ans = rec(0, amount);
		return ans == 1e9 ? -1 : ans ;
	}
};
